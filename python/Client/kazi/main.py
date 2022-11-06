import math

#taking the inputs and checking if they are valid or not 
trainA= 0
trainB= 0
while(trainA<2 or trainB<2):
    trainA = int(input("Enter the number of minutes between each A Train departure (then press Enter).\n"))
    trainB = int(input("Enter the number of minutes between each B Train departure (then press Enter).\n"))
    if(trainA<2 or trainB<2):
        print("Invalid data")


#this function calculate least common multiplier after 180 for two given input
def mylcm(trainA:int, trainB)->int:
    greater = 180
    while(True):
        #this is a sanity check to see we had pass 6:00 M or not
        if(greater>720):
            break 
        if((greater % trainA == 0) and (greater % trainB == 0)):
           lcm = greater
           break
        greater += math.gcd(trainA,trainB)
    return lcm

#calculate the time after 9:00 AM 
result = mylcm(trainA, trainB)-180

#retrive how many hours from the data 
hour = result//60 
#retrive how many minutes from the data 
minutes = result%60 if result>0 else "00" 
#defines whether it is AM or PM
suffix = "AM" if 9+hour<12 else "PM"

print("The earliest time both the A train and B Train leave together (between 9:00 AM and 6:00 PM inclusive) is:")
print(str(9+hour)+":"+str(minutes), suffix)
