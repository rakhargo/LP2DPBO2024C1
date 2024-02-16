/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
class Clothing extends Product
{
    private int size; // atribut untuk clothing
    private String material;
    private String gender;

    Clothing()
    {

    }

    Clothing(int size, String material, String gender) // konstruktor menggunakan atribut kelas ini
    {
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // getter dan setter
    void setSize(int size)
    {
        this.size = size;
    }

    void setMaterial(String material)
    {
        this.material = material;
    }

    void setGender(String gender)
    {
        this.gender = gender;
    }

    int getSize()
    {
        return this.size;
    }

    String getMaterial()
    {
        return this.material;
    }

    String getGender()
    {
        return this.gender;
    }
}
