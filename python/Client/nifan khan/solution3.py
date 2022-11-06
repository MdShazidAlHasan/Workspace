def binaryToDecimal(binary):
     
    binary1 = int(binary)
    decimal, i, n = 0, 0, 0
    while(binary1 != 0):
        dec = binary1 % 10
        decimal = decimal + dec * pow(2, i)
        binary1 = binary1//10
        i += 1
    print(decimal)   
     
binaryToDecimal('10')