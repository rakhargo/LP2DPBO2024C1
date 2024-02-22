from Product import Product # import file class parent nya

class Clothing(Product): # class clothing mewarisi product

    __size = 0 # semua atribut clothing
    __material = "" 
    __gender = ""

    def __init__(self, size = 0, material = "", gender = ""): # konstruktor dengan parameter
        self.size = size
        self.material = material
        self.gender = gender

    # setter dan getter untuk setiap atribut
    def set_size(self, size):
        self.size = size

    def set_material(self, material):
        self.material = material

    def set_gender(self, gender):
        self.gender = gender

    def get_size(self):
        return self.size

    def get_material(self):
        return self.material

    def get_gender(self):
        return self.gender