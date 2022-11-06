binary_num = input("Enter the Binary Number: ").split()

d = {}

def binaryToDecimal(binary):
     
    binary1 = int(binary)
    decimal, i, n = 0, 0, 0
    while(binary1 != 0):
        dec = binary1 % 10
        decimal = decimal + dec * pow(2, i)
        binary1 = binary1//10
        i += 1
    return decimal


for i in binary_num:
    dec = binaryToDecimal(i)
    d[dec] = i
print(d)



# dec_num = 0
# m = 1

# for digit in binary_num:
#     digit= int(digit)
#     dec_num = dec_num + (digit * m)
#     m = m * 2

# print("Equivalent Decimal Value = ", dec_num)