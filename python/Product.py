# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 2 dalam mata
#  kuliah DPBO
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 

class Product: # class product

    __id_product = 0 # untuk semua atribut
    __name = ""
    __brand = ""
    __price = ""

    def __init__(self, id_product = 0, name = "", brand = "", price = ""): # konstruktor dengan parameter 
        self.id_product = id_product
        self.name = name
        self.brand = brand
        self.price = price

    # setter dan getter untuk setiap atribut
    def set_id_product(self, id):
        self.id_product = id

    def set_name(self, name):
        self.name = name

    def set_brand(self, brand):
        self.brand = brand

    def set_price(self, price):
        self.price = price

    def get_id_product(self):
        return self.id_product

    def get_name(self):
        return self.name

    def get_brand(self):
        return self.brand

    def get_price(self):
        return self.price