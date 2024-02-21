#include <iostream>
#include <string>
#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing 
{

private:
    string color; // atribut untuk shirt
    string sleeve_type;

public:
    Shirt()
    {

    }

    Shirt(string color, string sleeve_type)
    {
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    // getter dan setter
    void setColor(string color) {
        this->color = color;
    }

    void setSleeveType(string sleeve_type) {
        this->sleeve_type = sleeve_type;
    }

    string getColor() const {
        return this->color;
    }

    string getSleeveType() const {
        return this->sleeve_type;
    }
};