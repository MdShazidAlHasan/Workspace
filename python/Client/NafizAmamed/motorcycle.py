class Motorcycle(object):
    count = 0

    def __init__(self, model, year):
        self.model = model
        self.year = year
        self.services =[]
        Motorcycle.count += 1

    def add_Services(self, *service):
        self.services = service

    def printMotorcycleDetail(self):
        print(f'Name: {self.model}')
        print(f'Year of manufacture: {self.year}')
        print(f'Services: '+ ', '.join(self.services)) 


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
