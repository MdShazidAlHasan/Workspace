class Passenger(object):
    def __init__(self, name = '', vechile = '', has_money = 0):
        self.name = name    
        if isinstance(vechile,int):
            self.has_money = vechile
            self.vechile = None
        else:
            self.vechile = vechile
            self.has_money = has_money 
        if self.vechile :
            print(f'{self.name} is waiting for {self.vechile.split()[0]} having {self.has_money} taka in pocket.')
        else:
            print(f'{self.name} has {self.has_money} taka in pocket.Please buy a ticket.')

    def buyTicket(self, value):
        self.vechile = value


class TicketCounter(object):

    def __init__(self):
        print('This is a general bus and train ticket counter.')
        self.passenger = 0
        self.bus_passenger = 0
        self.train_passenger = 0
        self.busPassengerlist = dict()
        self.trainPassengerlist = dict()

    def servePassenger(self, *args):
        farechart = args[-1]
        for people in args[:-1]:

            if isinstance(people, Passenger):
                if people.vechile:
                    self.passenger += 1
                    desire_ride = farechart[people.vechile.split()[0]] 
                    
                    #testing eligibility
                    if people.has_money > desire_ride:
                        #buying ticket
                        print(f'{people.name} has bought {people.vechile.split()[0]} ticket.')
                        people.has_money = people.has_money - desire_ride
                        
                        #add to dict
                        if people.vechile.split()[0] == 'Bus':
                            self.bus_passenger +=1
                            self.busPassengerlist[people.name] = people.has_money
                        elif people.vechile.split()[0] == 'Train':
                            self.train_passenger +=1 
                            self.trainPassengerlist[people.name] = people.has_money
                        else:
                            print('This vechile is not listed')
                        
                else:
                    print(f'{people.name} please buy a ticket first.')
     
    def showAllPassenger(self):
        print(f"Total passengers:{self.passenger}")
        print(f'Bus passengers:{self.bus_passenger}')
        for i, j in self.busPassengerlist.items():
            print(f"Passenger Name:{i} Remaining balance:{j}")
        #Passenger Name:Bob Remaining balance:250
        print(f'Train passengers:{self.train_passenger}')
        for k, l in self.trainPassengerlist.items():
            print(f"Passenger Name:{k} Remaining balance:{l}")

fareChart = {"Bus":550, "Train":600}
p1 = Passenger("Bob", "Bus Ticket",800)
p2 = Passenger("Simon", "Train Ticket", 950)
p3 = Passenger("David", "Train Ticket", 750)
p4 = Passenger("Carol", 1500)
p5 = Passenger("Shazid", "Train Ticket", 1000)
print("1==============================")
tc = TicketCounter()
print("2==============================")
tc.servePassenger(p1,fareChart)
print("3==============================")
tc.servePassenger(p2,fareChart)
print("4==============================")
tc.servePassenger(p3, p4, fareChart)
print("5==============================")
p4.buyTicket("Train Ticket")
tc.servePassenger(p4,fareChart)
print("6==============================")
tc.showAllPassenger()