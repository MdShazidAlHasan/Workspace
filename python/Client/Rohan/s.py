class Avengers:
     numberOfAvengers = 0
     def __init__(self, name = None):
         self.name = name
         print('Welcome to Multiverse!')
         if self.name == None:
             print('Who is your favourite Super Hero?')
         else:
             print(f'{self.name} is your favourite Super Hero!')

     def hasSuperPower(self):
         print('All Avengers have super powers.')

     def fightThanos(self):
         return 'No avenger can fight Thanos'


class Ironman(Avengers):
    superPowers = ''
    
    enemyList = []

    def __init__(self, name , status = ''):
        super().__init__(name)
        Avengers.numberOfAvengers +=1
        self.status = status

    def __str__(self):
        return f'Ironman-Tony Stark is not a member of Avengers.'

    def hasSuperPower(self):
        super().hasSuperPower()
        print(f'{Ironman.superPowers}')
    
    def fightThanos(self):
        if 'Thanos' in Ironman.enemyList:
            print(f'Ironman can fight Thanos')
        else:
            print('Ironman cannot fight Thanos')

    def addEnemy(self, enemy):
        Ironman.enemyList.append(enemy)
    

   

class DoctorStrange(Avengers):
    superPowers = ''
    enemyList = []
    def __init__(self, name, status):
        super().__init__(name)
        Avengers.numberOfAvengers +=1
        self.avenger_status = status

    def __str__(self):
        return f'Doctor Strange-Stephen Strange is not a member of Avengers.'

    def hasSuperPower(self):
        super().hasSuperPower()
        return f'{DoctorStrange.superPowers}'
    
    def fightThanos(self):
        if 'Thanos' in DoctorStrange.enemyList:
            print(f'Ironman can fight Thanos')
        else:
            print('Ironman cannot fight Thanos')

    
    

    



#Write your code here
#-------------------------------------------------------------------------------------
print('1.===============================')
print('Number of Avengers:', Avengers.numberOfAvengers)
print('2.===============================')
a1 = Avengers()
print('3.===============================')
a1.hasSuperPower()
print('4.===============================')
print(a1.fightThanos())
print('5.===============================')
im1 = Ironman('Tony Stark')
print('6.===============================')
print(im1)
print('7.===============================')
Ironman.superPowers = 'Superhuman Strength and Durability, Flight, and An array of weapons'
im1.hasSuperPower()
print('8.===============================')
ds1 = DoctorStrange('Stephen Strange', 'No')
print('9.===============================')
print(ds1)
print('10.===============================')
DoctorStrange.superPowers = 'Mastery of magic, Utilizes mystical artifacts, such as the Cloak of Levitation and the Eye of Agamotto'
print(ds1.hasSuperPower())
print('11.===============================')
ds1.avenger_status = 'Yes'
print(ds1)
print('12.==============================')
Ironman.enemyList = ['Mandarin','Ghost','Spymaster']
print(Ironman.enemyList)
print('13.==============================')
im1.fightThanos()
im1.addEnemy('Thanos')
print('14.==============================')
im1.fightThanos()
print('15.==============================')
ds1.enemyList = ['Sorcerer Yandroth','Dormammu']
print(ds1.enemyList)
print('16.==============================')
ds1.fightThanos()
print('17.==============================')
print('Number of Avengers:', Avengers.numberOfAvengers)



# OUTPUT:
# 1.===============================
# Number of Avengers: 0
# 2.===============================
# Welcome to Multiverse!
# Who is your favourite Super Hero?
# 3.===============================
# All Avengers have super powers.
# 4.===============================
# No avenger can fight Thanos
# 5.===============================
# Welcome to Multiverse!
# Tony Stark is your favourite Super Hero!
# 6.===============================
# Ironman-Tony Stark is not a member of Avengers.
# 7.===============================
# All Avengers have super powers.
# Ironman's super powers are Superhuman Strength and Durability, Flight, and 
# An array of weapons
# 8.===============================
# Welcome to Multiverse!
# Stephen Strange is your favourite Super Hero!
# 9.===============================
# Doctor Strange-Stephen Strange is not a member of Avengers.
# 10.===============================
# All Avengers have super powers.
# Doctor Strange's super powers are Mastery of magic, Utilizes mystical 
# artifacts, such as the Cloak of Levitation and the Eye of Agamotto
# 11.===============================
# Doctor Strange-Stephen Strange is a member of Avengers.
# 12.==============================
# ['Mandarin', 'Ghost', 'Spymaster']
# 13.==============================
# Ironman cannot fight Thanos
# 14.==============================
# Ironman can fight Thanos
# 15.==============================
# ['Sorcerer Yandroth', 'Dormammu']
# 16.==============================
# Doctor Strange cannot fight Thanos
# 17.==============================
# Number of Avengers: 2