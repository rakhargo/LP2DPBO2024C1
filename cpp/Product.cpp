/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
 
#include <bits/stdc++.h> // include library

using namespace std;

class Product // class product
{
    
private: // atribut dari class product
    int idProduct;
    string name;
    string brand;
    string price;

public:
    Product() // konstruktor kosong
    {

    }

    Product(int id, string name, string brand, string price) // konstruktor dengan parameter
    {
        this->idProduct = id; // set semua atribut
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    // setter dan getter setiap atribut
    void setIdProduct(int id)
    {
        this->idProduct = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    void setPrice(string price)
    {
        this->price = price;
    }

    int getIdProduct()
    {
        return this->idProduct;
    }

    string getName()
    {
        return this->name;
    }

    string getBrand()
    {
        return this->brand;
    }

    string getPrice()
    {
        return this->price;
    }

    ~Product() // destruktor
    {
        
    }
};