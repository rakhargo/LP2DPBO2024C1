/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah Struktur data
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
class Shirt extends Clothing
{
    private String color; // atribut kelas shirt
    private String sleeve_type;

    Shirt()
    {

    }

    Shirt(String color, String sleeve_type) // konstruktor menggunakan atribut kelas ini
    {
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    // getter dan setter
    void setColor(String color)
    {
        this.color = color;
    }

    void setSleeveType(String sleeve_type)
    {
        this.sleeve_type = sleeve_type;
    }

    String getColor()
    {
        return this.color;
    }

    String getSleeveType()
    {
        return this.sleeve_type;
    }

}
