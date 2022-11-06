class RealNumber:
    def __init__(self, number=0):
        self.number = number
    def __add__(self, anotherRealNumber):
        return self.number + anotherRealNumber.number 
    def __sub__(self, anotherRealNumber):
        return self.number - anotherRealNumber.number 
    def __str__(self):
        return str(self.number)
    def __int__(self): # hahaha! this is a hack for this code
       return self.number


class ComplexNumber(object):

    def __init__(self, real = 0, imag=0.0):
        # if isinstance(real, RealNumber):
        #     print('yes')
        
        # if isinstance(imag, RealNumber):
        #     print("yes2")

        self.real = int(real)
        self.imag = int(imag)

    def __add__(self, other):       
        return ComplexNumber(self.real + other.real,
        self.imag + other.imag)

    def __sub__(self, other):
        print(self.real, self.imag , '\n', other.real, other.imag)
        return ComplexNumber(self.real - other.real,
                       self.imag - other.imag)

    def __str__(self):
        return '{0} + {1}i'.format(self.real, self.imag)
    
r1 = RealNumber(3)
r2 = RealNumber(5)
print(type(r1))
cn1 = ComplexNumber(2, 1)
print(cn1)
cn2 = ComplexNumber(r1, 5)
print(cn2)
cn3 = cn1 + cn2
print(cn3)
cn4 = cn1 - cn2
print(cn4)