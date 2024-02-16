class Product 
{
    private int idProduct; // atribut untuk product
    private String name;
    private String brand;
    private String price;

    Product()
    {

    }

    Product(int id, String name, String brand, String price) // konstruktor hanya melibatkan atribut kelas ini
    {
        this.idProduct = id;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    // getter dan setter
    void setIdProduct(int id)
    {
        this.idProduct = id;
    }

    void setName(String name)
    {
        this.name = name;
    }

    void setBrand(String brand)
    {
        this.brand = brand;
    }

    void setPrice(String price)
    {
        this.price = price;
    }

    int getIdProduct()
    {
        return this.idProduct;
    }

    String getName()
    {
        return this.name;
    }

    String getBrand()
    {
        return this.brand;
    }

    String getPrice()
    {
        return this.price;
    }
}
