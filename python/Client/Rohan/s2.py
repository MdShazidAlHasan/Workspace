class Purchaser(object):
    id = 0
    def __init__(self, name, rg_no = ''):
        self.name = name
        self.id = Purchaser.id + 1
        if rg_no:
            self.rg_no = rg_no
        else:
            self.rg_no = None
    def __str__(self):
        return f"Customer SL no.: {self.id} \nCustomer Name: {self.name} \nRegistered Customer ID: {self.rg_no}"

    def create_invoice(self, *products):
        pass

class AarongProducts(object):
    products = {}

    def __init__(self, _type, name, count = 1):
        self._type = _type
        self.name = name
        self.count = count
        AarongProducts.products[_type] = name

    def __str__(self):
        return f"Products Order Details: \n{self.count } {self.name}"
    
    @classmethod
    def include_products(cls, _type, name):
        AarongProducts.products[_type] = name



p1 = Purchaser('Alex Light')
print('1.===============================')
print(p1)
product1 = AarongProducts('Decor', 'Photo-Frame')
print('2.===============================')
print(product1)
print('3.===============================')
print(AarongProducts.products)
print('4.===============================')
AarongProducts.include_products('Souvenirs',['Brass-Flowervase 2170', 'Terracotta-Vase 3500'])
print(f'Updated Item List:\n{AarongProducts.products}')
print('5.===============================')
product2 = AarongProducts('Souvenirs', 'Terracotta-Vase', 2)
print(product2)
print('6.===============================')
p1.create_invoice(product1, product2)
print('7.===============================')
product3 = AarongProducts('Decor', 'Candles', 5)
print(product3)
print('8.===============================')
product4 = AarongProducts('Souvenirs', 'Brass Sail-boats', 2)
print(product4)
print('9.===============================')
p2 = Purchaser('Emma Lord', 'M01-23')
print(p2)
print('10.==============================')
p2.create_invoice(product1, product3, product4)

# OUTPUT:
# 1.===============================
# Customer SL no.: 1
# Customer Name: Alex Light
# Registered Customer ID: None
# 2.===============================
# 
# 1 Photo-Frame.
# 3.===============================
# {'Decor': {'Small-Mirror': 1110, 'Photo-Frame': 1240, 'Candles': 
# 350}, 'Souvenirs': {'Brass Sail-boats': 2200}}
# 4.===============================
# Updated Item List:
# {'Decor': {'Small-Mirror': 1110, 'Photo-Frame': 1240, 'Candles': 
# 350}, 'Souvenirs': {'Brass Sail-boats': 2200, 'Brass-Flowervase': 
# 2170, 'Terracotta-Vase': 3500}}
# 5.===============================
# Products Order Details:
# 2 Terracotta-Vase.
# 6.===============================
# Total Bill of Alex Light:
# 8240.0 Tk.
# 7.===============================
# Products Order Details:
# 5 Candles.
# 8.===============================
# Products Order Details:
# 2 Brass Sail-boats.
# 9.===============================
# Customer SL no.: 2
# Customer Name: Emma Lord
# Registered Customer ID: M01-23
# Registered Customer will get 10% discount
# 10.==============================
# Total Bill of Emma Lord:
# 6651.0 Tk.