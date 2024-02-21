#include <iostream>
#include <string>

using namespace std;

class Product 
{
    
private:
    int idProduct;
    string name;
    string brand;
    string price;

public:
    Product()
    {

    }

    Product(int id, string name, string brand, string price)
    {
        this->idProduct = id;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    // getter dan setter
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
};