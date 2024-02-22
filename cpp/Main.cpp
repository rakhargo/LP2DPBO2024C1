#include <bits/stdc++.h>
#include "Shirt.cpp"

using namespace std;

int main()
{
    int maxID = 2; // keperluan untuk membuat tabel dengan mencari length terpanjang untuk setiap data
    int maxNama = 4;
    int maxBrand = 5;
    int maxHarga = 5;
    int maxUkuran = 6;
    int maxMaterial = 8;
    int maxGender = 6;
    int maxWarna = 5;
    int maxSleeve = 12;

    vector<Shirt> listShirt; // vector utama untuk data

    cout << "Masukkan banyaknya data Shirt:" << endl;
    int n;
    cin >> n; // banyaknya data

    for (int i = 0; i < n; i++)
    {
        int id, size; string name, brand, price, material, gender, color, sleeve_type; // variabel temp untuk menampung sementara data masukan

        cout << "ID Produk                 : "; cin >> id; // meminta masukan untuk setiap atribut
        cout << "Nama Produk               : "; cin >> name;
        cout << "Brand Produk              : "; cin >> brand;
        cout << "Harga Produk              : "; cin >> price;

        cout << "Ukuran Pakaian            : "; cin >> size;
        cout << "Material Pakaian          : "; cin >> material;
        cout << "Gender Pakaian            : "; cin >> gender;

        cout << "Warna Kaos                : "; cin >> color;
        cout << "Jenis Lengan Kaos         : "; cin >> sleeve_type;

        Shirt temp(color, sleeve_type); // temp untuk menampung sementara objek untuk dimasukkan ke list data
        // meng set sisa atribut
        temp.setIdProduct(id);
        temp.setName(name);
        temp.setBrand(brand);
        temp.setPrice(price);
        temp.setSize(size);
        temp.setMaterial(material);
        temp.setGender(gender);

        listShirt.push_back(temp); // memasukkan ke list utama

        // proses mencari max length, keperluan membuat tabel
        if (to_string(id).length() > maxID) maxID = to_string(id).length();
        if (name.length() > maxNama) maxNama = name.length();
        if (brand.length() > maxBrand) maxBrand = brand.length();
        if (price.length() > maxHarga) maxHarga = price.length();
        if (to_string(size).length() > maxUkuran) maxUkuran = to_string(size).length();
        if (material.length() > maxMaterial) maxMaterial = material.length();
        if (gender.length() > maxGender) maxGender = gender.length();
        if (color.length() > maxWarna) maxWarna = color.length();
        if (sleeve_type.length() > maxSleeve) maxSleeve = sleeve_type.length();
    }

    // membuat header tabel
    cout << "+";
    for (int i = 0; i < maxID; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxNama; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxBrand; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxHarga; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxUkuran; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxMaterial; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxGender; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxWarna; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxSleeve; i++) cout << "-";
    
    cout << "+" << endl;

    cout << "|ID";
    for (int i = 0; i < maxID - 2; i++) cout << " ";
    cout << "|Nama";
    for (int i = 0; i < maxNama - 4; i++) cout << " ";
    cout << "|Brand";
    for (int i = 0; i < maxBrand - 5; i++) cout << " ";
    cout << "|Harga";
    for (int i = 0; i < maxHarga - 5; i++) cout << " ";
    cout << "|Ukuran";
    for (int i = 0; i < maxUkuran - 6; i++) cout << " ";
    cout << "|Material";
    for (int i = 0; i < maxMaterial - 8; i++) cout << " ";
    cout << "|Gender";
    for (int i = 0; i < maxGender - 6; i++) cout << " ";
    cout << "|Warna";
    for (int i = 0; i < maxWarna - 5; i++) cout << " ";
    cout << "|Jenis Lengan";
    for (int i = 0; i < maxSleeve - 12; i++) cout << " ";

    cout << "|" << endl;

    cout << "+";
    for (int i = 0; i < maxID; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxNama; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxBrand; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxHarga; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxUkuran; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxMaterial; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxGender; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxWarna; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxSleeve; i++) cout << "-";
    
    cout << "+" << endl;
    
    for (int i = 0; i < listShirt.size(); i++)
    {

        cout << "|";
        cout << listShirt[i].getIdProduct(); // menggunakan getter id
        for (int j = 0; j < maxID - to_string(listShirt[i].getIdProduct()).length(); j++) 
        {
            cout << " ";
        }

        cout << "|";
        cout << listShirt[i].getName(); // menggunakan getter name
        for (int j = 0; j < maxNama - listShirt[i].getName().length(); j++) 
        {
            cout << " ";
        }

        cout << "|";
        cout << listShirt[i].getBrand(); // menggunakan getter brand
        for (int j = 0; j < maxBrand - listShirt[i].getBrand().length(); j++) 
        {
            cout << " ";
        }
        
        cout << "|";
        cout << listShirt[i].getPrice(); // menggunakan getter price
        for (int j = 0; j < maxHarga - listShirt[i].getPrice().length(); j++) 
        {
            cout << " ";
        }
        
        cout << "|";
        cout << listShirt[i].getSize(); // menggunakan getter size
        for (int j = 0; j < maxUkuran - to_string(listShirt[i].getSize()).length(); j++) 
        {
            cout << " ";
        }
        
        cout << "|";
        cout << listShirt[i].getMaterial(); // menggunakan getter material
        for (int j = 0; j < maxMaterial - listShirt[i].getMaterial().length(); j++) 
        {
            cout << " ";
        }
        
        cout << "|";
        cout << listShirt[i].getGender(); // menggunakan getter gender
        for (int j = 0; j < maxGender - listShirt[i].getGender().length(); j++) 
        {
            cout << " ";
        }
        
        cout << "|";
        cout << listShirt[i].getColor(); // menggunakan getter color
        for (int j = 0; j < maxWarna - listShirt[i].getColor().length(); j++) 
        {
            cout << " ";
        }
        
        cout << "|";
        cout << listShirt[i].getSleeveType(); // menggunakan getter sleeve_type
        for (int j = 0; j < maxSleeve - listShirt[i].getSleeveType().length(); j++) 
        {
            cout << " ";
        }

        cout << "|" << endl;
    }

    // footer tabel
    cout << "+";
    for (int i = 0; i < maxID; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxNama; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxBrand; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxHarga; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxUkuran; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxMaterial; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxGender; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxWarna; i++) cout << "-";
    cout << "+";
    for (int i = 0; i < maxSleeve; i++) cout << "-";
    
    cout << "+" << endl;
    

    return 0;
}