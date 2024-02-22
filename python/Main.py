from Product import Product # import semua file class yang dibutuhkan
from Clothing import Clothing
from Shirt import Shirt

maxID = 2 # keperluan untuk membuat tabel
maxNama = 4
maxBrand = 5
maxHarga = 5
maxUkuran = 6
maxMaterial = 8
maxGender = 6
maxWarna = 5
maxSleeve = 12

listShirt = [] # membuat list utama

n = int(input("Masukkan banyaknya data Shirt:")) # meminta masukan banyak data

for i in range (n): # perulangan utama untuk membuat setiap data
    id = int(input("ID Produk                 : ")) # meminta masukan untuk semua atribut
    name = input("Nama Produk               : ")
    brand = input("Brand Produk              : ")
    price = input("Harga Produk              : ")

    size = int(input("Ukuran Pakaian            : "))
    material = input("Material Pakaian          : ")
    gender = input("Gender Pakaian            : ")

    color = input("Warna Kaos                : ")
    sleeve_type = input("Jenis Lengan Kaos         : ")

    # penampung untuk dimasukkan ke list utama
    temp = Shirt(color, sleeve_type)
    temp.set_id_product(id)
    temp.set_name(name)
    temp.set_brand(brand)
    temp.set_price(price)
    temp.set_size(size)
    temp.set_material(material)
    temp.set_gender(gender)

    listShirt.append(temp) # memasukkan penampung ke list utama

    # proses mencari max length, keperluan membuat tabel
    if len(str(id)) > maxID: maxID = len(str(id))
    if len(name) > maxNama: maxNama = len(name)
    if len(brand) > maxBrand: maxBrand = len(brand)
    if len(price) > maxHarga: maxHarga = len(price)
    if len(str(size)) > maxUkuran: maxUkuran = len(str(size))
    if len(material) > maxMaterial: maxMaterial = len(material)
    if len(gender) > maxGender: maxGender = len(gender)
    if len(color) > maxWarna: maxWarna = len(color)
    if len(sleeve_type) > maxSleeve: maxSleeve = len(sleeve_type)

# print header tabel
print("+" + "-" * maxID + "+" + "-" * maxNama + "+" + "-" * maxBrand + "+" + "-" * maxHarga + "+" + "-" * maxUkuran + "+" + "-" * maxMaterial + "+" + "-" * maxGender + "+" + "-" * maxWarna + "+" + "-" * maxSleeve + "+")
print("|ID" + " " * (maxID - 2) + "|Nama" + " " * (maxNama - 4) + "|Brand" + " " * (maxBrand - 5) + "|Harga" + " " * (maxHarga - 5) + "|Ukuran" + " " * (maxUkuran - 6) + "|Material" + " " * (maxMaterial - 8) + "|Gender" + " " * (maxGender - 6) + "|Warna" + " " * (maxWarna - 5) + "|Jenis Lengan" + " " * (maxSleeve - 12) + "|")
print("+" + "-" * maxID + "+" + "-" * maxNama + "+" + "-" * maxBrand + "+" + "-" * maxHarga + "+" + "-" * maxUkuran + "+" + "-" * maxMaterial + "+" + "-" * maxGender + "+" + "-" * maxWarna + "+" + "-" * maxSleeve + "+")

for shirt in listShirt: # perulangan untuk print data

    print("|", end="")
    print(shirt.get_id_product(), end="") # getter id
    print(" " * (maxID - len(str(shirt.get_id_product()))), end="")

    print("|", end="")
    print(shirt.get_name(), end="") # getter name
    print(" " * (maxNama - len(shirt.get_name())), end="")

    print("|", end="")
    print(shirt.get_brand(), end="") # getter brand
    print(" " * (maxBrand - len(shirt.get_brand())), end="")

    print("|", end="")
    print(shirt.get_price(), end="") # getter price
    print(" " * (maxHarga - len(shirt.get_price())), end="")

    print("|", end="")
    print(shirt.get_size(), end="") # getter size
    print(" " * (maxUkuran - len(str(shirt.get_size()))), end="")

    print("|", end="")
    print(shirt.get_material(), end="") # getter material
    print(" " * (maxMaterial - len(shirt.get_material())), end="")

    print("|", end="")
    print(shirt.get_gender(), end="") # getter gender
    print(" " * (maxGender - len(shirt.get_gender())), end="")

    print("|", end="")
    print(shirt.get_color(), end="") # getter color
    print(" " * (maxWarna - len(shirt.get_color())), end="")

    print("|", end="")
    print(shirt.get_sleeve_type(), end="") # getter sleeve type
    print(" " * (maxSleeve - len(shirt.get_sleeve_type())), end="")

    print("|")

# footer tabel
print("+" + "-" * maxID + "+" + "-" * maxNama + "+" + "-" * maxBrand + "+" + "-" * maxHarga + "+" + "-" * maxUkuran + "+" + "-" * maxMaterial + "+" + "-" * maxGender + "+" + "-" * maxWarna + "+" + "-" * maxSleeve + "+")
