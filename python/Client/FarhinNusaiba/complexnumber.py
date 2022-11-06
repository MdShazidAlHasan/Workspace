class ComplexNumber(object):
    def __init__(self, real = 1, imagine = 1):
        self.real = float(real)
        self.imagine = float(imagine)

    def getRealvalue(self):
        return self.real

    def setRealvalue(self, value):
        self.real = value

    def getImaginevalue(self):
        return self.imagine

    def setImanginevalue(self, value):
        self.imagine = value

    def __str__(self):
        r = "RealPart: " + str(self.getRealvalue())
        i = "ImaginaryPart: " + str(self.getImaginevalue())
        return r +'\n'+i 


cn1 = ComplexNumber()
print(cn1)
print('---------')
cn2 = ComplexNumber(5,7)
print(cn2)