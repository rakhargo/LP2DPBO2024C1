#include <iostream>
#include <string>
#include "Product.cpp"

using namespace std;

class Clothing : public Product 
{

private:
    int size; // atribut untuk clothing
    string material;
    string gender;

public:
    Clothing() 
    {

    }

    Clothing(int size, string material, string gender)
    {
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    // getter dan setter
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
};