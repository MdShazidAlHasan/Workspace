Implement the design of the Motorcycle class so that the following output 
is produced:
[Your code should work for any number of services added in the add_Services 
method]

# Write your code here

# Do not change the following lines of code.
print('No. of Motorcycle =', Motorcycle.count)
m1 = Motorcycle('Yamaha MT-15', 2019)
m1.add_Services('Oil change', 'Replace coolant')
m2 = Motorcycle('Suzuki V-Strom 650', 2020)
m2.add_Services('Rear suspension check', 'New air filter', 'Oil change')
m3 = Motorcycle('Honda Gold Wing', 2017)
m3.add_Services('Adjustment of throttle and clutch', 'New oil filter')
print("=========================")
m1.printMotorcycleDetail()
print("=========================")
m2.printMotorcycleDetail()
print("=========================")
m3.printMotorcycleDetail()
print("=========================")
print('No. of Motorcycle =', Motorcycle.count)

Output:
No. of Motorcycle = 0
=========================
Name: Yamaha MT-15
Year of manufacture: 2019
Services: Oil change, Replace coolant
=========================
Name: Suzuki V-Strom 650
Year of manufacture: 2020
Services: Rear suspension check, New air filter, Oil change
=========================
Name: Honda Gold Wing
Year of manufacture: 2017
Services: Adjustment of throttle and clutch, New oil filter
=========================
No. of Motorcycle = 3







Design the required class(es) so that the following expected output is 
generated. Do not change any given code. Your code should work for any 
number of arguments in the serverPassenger() method.

# Write you code here
fareChart = {"Bus":550, "Train":600}
p1 = Passenger("Bob", "Bus Ticket",800)
p2 = Passenger("Simon", "Train Ticket", 950)
p3 = Passenger("David", "Train Ticket", 750)
p4 = Passenger("Carol", 1500)
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

Output:
Bob is waiting for Bus having 800 taka in pocket.
Simon is waiting for Train having 950 taka in pocket.
David is waiting for Train having 750 taka in pocket.
Carol has 1500 taka in pocket.Please buy a ticket.
1==============================
This is a general bus and train ticket counter.
2==============================
Bob has bought Bus ticket.
3==============================
Simon has bought Train ticket.
4==============================
David has bought Train ticket.
Carol please buy a ticket first.
5==============================
Carol has bought Train ticket.
6==============================
Total passengers:4
Bus passengers:1
Passenger Name:Bob Remaining balance:250
Bus passengers:3
Passenger Name:Simon Remaining balance:350
Passenger Name:David Remaining balance:150
Passenger Name:Carol Remaining balance:900