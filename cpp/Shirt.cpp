#include <bits/stdc++.h>
#include "Clothing.cpp" // include file class parent

using namespace std;

class Shirt : public Clothing // class shirt mewarisi class clothing
{

private:
    string color; // atribut untuk shirt
    string sleeve_type;

public:
    Shirt() // konstruktor kosong
    {

    }

    Shirt(string color, string sleeve_type) // konstruktor dengan parameter
    {
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    // setter dan getter semua atribut
    void setColor(string color) {
        this->color = color;
    }

    void setSleeveType(string sleeve_type) {
        this->sleeve_type = sleeve_type;
    }

    string getColor()  
    {
        return this->color;
    }

    string getSleeveType()  
    {
        return this->sleeve_type;
    }

    ~Shirt() // destruktor
    {
        
    }
};