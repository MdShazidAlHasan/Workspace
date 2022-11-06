class PokemonBasic:
    
    def __init__(self, name = 'Default', hp = 0, weakness = 'None', type = 'Unknown'):
        self.name = name
        self.hit_point = hp
        self.weakness = weakness
        self.type = type

    def get_type(self):
        return 'Main type: ' + self.type
    
    def get_move(self):
        return 'Basic move: ' + 'Quick Attack'
    
    def __str__(self):
        return "Name: " + self.name + ", HP: " + str(self.hit_point) + ", Weakness: " + self.weakness


class PokemonExtra(PokemonBasic):
    
    def __init__(self, name, hp, weakness, type, *args):
        super().__init__(name, hp, weakness, type)
        self.args = args
        self.sc_type = args

    def get_move(self):
        super().get_move()
        if self.args:
            print(self.args)
            w = 'Secondary Move: '+ ','.join(self.args)




print('\n------------BasicInfo:--------------') 
pk = PokemonBasic()
print(pk)
print(pk.get_type())
print(pk.get_move())
print('\n------------Pokemon 1 Info:-------------') 
charmander = PokemonExtra('Charmander', 39, 'Water', 'Fire')
print(charmander)
print(charmander.get_type())
print(charmander.get_move())
print('\n------------Pokemon 2 Info:-------------') 
charizard = PokemonExtra('Charizard', 78, 'Water', 'Fire', 'Flying', ('Fire Spin', 'FireBlaze'))
print(charizard)
print(charizard.get_type())
print(charizard.get_move())

# ------------Pokemon 1 Info:-------------- 
# Name:  Charmander, HP: 39, Weakness: Water 
# Main type: Fire 
# Basic move: Quick Attack 
# ------------Pokemon 2 Info:-------------- 
# Name: Charizard, HP: 78, Weakness:  Water 
# Main type: Fire, Secondary type: Flying 
# Basic move: Quick Attack 
# Other move: Fire Spin, Fire Blaze 