# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 2 dalam mata
#  kuliah DPBO
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 

from Clothing import Clothing # import file class parent nya

class Shirt(Clothing): # class shirt mewarisi clothing
 
    __color = "" # semua atribut shirt
    __sleeve_type = ""

    def __init__(self, color = "", sleeve_type = ""): # konstruktor dengan parameter
        self.color = color
        self.sleeve_type = sleeve_type

    # setter dan getter untuk setiap atribut
    def set_color(self, color):
        self.color = color

    def set_sleeve_type(self, sleeve_type):
        self.sleeve_type = sleeve_type

    def get_color(self):
        return self.color

    def get_sleeve_type(self):
        return self.sleeve_type