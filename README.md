# LP2DPBO2024C1
Latihan Praktikum 2

Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah Desain Pemrograman Berorientasi Objek
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin. 

 ## Desain Program
 ![kela](https://github.com/rakhargo/LP2DPBO2024C1/assets/117525800/7e588717-d0c1-4acb-a56b-1c0fbc8428ec)

Program terdiri dari 3 kelas, yaitu kelas Product, Clothing, Shirt. Ketiga objek tersebut jenisnya sama yaitu barang untuk dijual. Sehingga ketiga kelas tersebut mengimplementasikan konsep Multi-level Inheritance.

1. Product
Atribut:
ID Product
Name
Brand
Price

2. Clothing
Atribut:
Size
Material
Gender

3. Shirt
Atribut:
Color
Sleeve Type

Disini pewaris paling bawahnya adalah Shirt yang parentnya adalah Clothing yang dimana parentnya juga adalah Product. Artinya Product adalah base class atau class utama. Alasan desain inheritance saya seperti itu karena menurut saya Kaos sudah pasti Pakaian, lalu Pakaian sudah pasti Produk. Sedangkan Produk belum tentu Pakaian saja, dan Pakaian juga belum tentu Kaos saja. Lalu juga atribut-atribut dari Product bisa dipakai di Clothing dan Shirt, lalu atribut-atribut yang di Clothing pun bisa dipakai di Shirt, sedangkan tidak untuk sebaliknya. Itulah alasan utama mengapa desain saya seperti itu
