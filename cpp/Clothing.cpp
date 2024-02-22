#include <bits/stdc++.h>
#include "Product.cpp" // include file class parent

using namespace std;

class Clothing : public Product // class clothing mewarisi class product
{

private:
    int size; // atribut untuk clothing
    string material;
    string gender;

public:
    Clothing() // konstruktor kosong
    {

    }

    Clothing(int size, string material, string gender) // konstruktor dengan parameter 
    {
        this->size = size; // set semua atribut
        this->material = material;
        this->gender = gender;
    }

    // setter dan getter semua atribut
    void setSize(int size) {
        this->size = size;
    }

    void setMaterial(string material) {
        this->material = material;
    }

    void setGender(string gender) {
        this->gender = gender;
    }

    int getSize() 
    {
        return this->size;
    }

    string getMaterial() 
    {
        return this->material;
    }

    string getGender() 
    {
        return this->gender;
    }

    ~Clothing() // destruktor
    {
        
    }
};