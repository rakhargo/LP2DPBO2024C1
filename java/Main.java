/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah Struktur data
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
import java.util.ArrayList;
import java.util.Scanner;

class Main 
{
    public static void main(String[] args) 
    {
        int maxID = 2; // keperluan untuk membuat tabel
        int maxNama = 4;
        int maxBrand = 5;
        int maxHarga = 5;
        int maxUkuran = 6;
        int maxMaterial = 8;
        int maxGender = 6;
        int maxWarna = 5;
        int maxSleeve = 12;

        ArrayList<Shirt> listShirt = new ArrayList<>(); // array list utama untuk data

        Scanner sc = new Scanner(System.in); // untuk scan meminta masukan
        System.out.println("Masukkan banyaknya data Shirt:");
        int n = sc.nextInt(); // banyaknya data

        for (int i = 0; i < n; i++) // perulangan utama
        {
            int id, size; String name, brand, price, material, gender, color, sleeve_type; // variabel temp untuk meminta masukan user untuk data shirt
            // meminta masukan untuk setiap atribut
            System.out.print("ID Produk         : "); id = sc.nextInt();
            System.out.print("Nama Produk       : "); name = sc.next();
            System.out.print("Brand Produk      : "); brand = sc.next();
            System.out.print("Harga Produk      : "); price = sc.next();
            
            System.out.print("Ukuran Pakaian    : "); size = sc.nextInt();
            System.out.print("Material Pakaian  : "); material = sc.next();
            System.out.print("Gender Pakaian    : "); gender = sc.next();
            
            System.out.print("Warna Kaos        : "); color = sc.next();
            System.out.print("Jenis lengan Kaos : "); sleeve_type = sc.next();
            
            Shirt temp = new Shirt(color, sleeve_type); // instansiasi menggunakan variabel temp di kelas shirt
            // menggunakan setter dari kelas lain yaitu kelas clothing dan product untuk setiap atribut
            temp.setIdProduct(id);
            temp.setName(name);
            temp.setBrand(brand);
            temp.setPrice(price);
            temp.setSize(size);
            temp.setMaterial(material);
            temp.setGender(gender);

            listShirt.add(temp); // memasukkan ke list
            
            // proses mencari max length, keperluan membuat tabel
            if (Integer.toString(id).length() > maxID) maxID = Integer.toString(id).length();
            if (name.length() > maxNama) maxNama = name.length();
            if (brand.length() > maxBrand) maxBrand = brand.length();
            if (price.length() > maxHarga) maxHarga = price.length();
            if (Integer.toString(size).length() > maxUkuran) maxUkuran = Integer.toString(size).length();
            if (material.length() > maxMaterial) maxMaterial = material.length();
            if (gender.length() > maxGender) maxGender = gender.length();
            if (color.length() > maxWarna) maxWarna = color.length();
            if (sleeve_type.length() > maxSleeve) maxSleeve = sleeve_type.length();
        
        }

        // membuat header tabel
        System.out.print("+");
        for (int i = 0; i < maxID; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxNama; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxBrand; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxHarga; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxUkuran; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxMaterial; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxGender; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxWarna; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxSleeve; i++) System.out.print("-");
        
        System.out.println("+");
    
        
        System.out.print("|ID");
        for (int i = 0; i < maxID - 2; i++) System.out.print(" ");
        System.out.print("|Nama");
        for (int i = 0; i < maxNama - 4; i++) System.out.print(" ");
        System.out.print("|Brand");
        for (int i = 0; i < maxBrand - 5; i++) System.out.print(" ");
        System.out.print("|Harga");
        for (int i = 0; i < maxHarga - 5; i++) System.out.print(" ");
        System.out.print("|Ukuran");
        for (int i = 0; i < maxUkuran - 6; i++) System.out.print(" ");
        System.out.print("|Material");
        for (int i = 0; i < maxMaterial - 8; i++) System.out.print(" ");
        System.out.print("|Gender");
        for (int i = 0; i < maxGender - 6; i++) System.out.print(" ");
        System.out.print("|Warna");
        for (int i = 0; i < maxWarna - 5; i++) System.out.print(" ");
        System.out.print("|Jenis Lengan");
        for (int i = 0; i < maxSleeve - 12; i++) System.out.print(" ");

        System.out.println("|");

        System.out.print("+");
        for (int i = 0; i < maxID; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxNama; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxBrand; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxHarga; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxUkuran; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxMaterial; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxGender; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxWarna; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxSleeve; i++) System.out.print("-");
        
        System.out.println("+");

        for (int i = 0; i < listShirt.size(); i++) // perulangan untuk menampilkan data
        {
            System.out.print("|");

            System.out.print(listShirt.get(i).getIdProduct()); // menggunakan getter id
            for (int j = 0; j < maxID - Integer.toString(listShirt.get(i).getIdProduct()).length(); j++) 
            {
                System.out.print(" ");
            }

            System.out.print("|");
            System.out.print(listShirt.get(i).getName()); // menggunakan getter name
            for (int j = 0; j < maxNama - listShirt.get(i).getName().length(); j++) 
            {
                System.out.print(" ");
            }

            System.out.print("|");
            System.out.print(listShirt.get(i).getBrand()); // menggunakan getter brand
            for (int j = 0; j < maxBrand - listShirt.get(i).getBrand().length(); j++) 
            {
                System.out.print(" ");
            }

            System.out.print("|");
            System.out.print(listShirt.get(i).getPrice()); // menggunakan getter price
            for (int j = 0; j < maxHarga - listShirt.get(i).getPrice().length(); j++) 
            {
                System.out.print(" ");
            }
            
            System.out.print("|");
            System.out.print(listShirt.get(i).getSize()); // menggunakan getter size
            for (int j = 0; j < maxUkuran - Integer.toString(listShirt.get(i).getSize()).length(); j++) 
            {
                System.out.print(" ");
            }
            
            System.out.print("|");
            System.out.print(listShirt.get(i).getMaterial()); // menggunakan getter material
            for (int j = 0; j < maxMaterial - listShirt.get(i).getMaterial().length(); j++) 
            {
                System.out.print(" ");
            }
            
            System.out.print("|");
            System.out.print(listShirt.get(i).getGender()); // menggunakan getter gender
            for (int j = 0; j < maxGender - listShirt.get(i).getGender().length(); j++) 
            {
                System.out.print(" ");
            }
            
            System.out.print("|");
            System.out.print(listShirt.get(i).getColor()); // menggunakan getter color
            for (int j = 0; j < maxWarna - listShirt.get(i).getColor().length(); j++) 
            {
                System.out.print(" ");
            }
            
            System.out.print("|");
            System.out.print(listShirt.get(i).getSleeveType()); // menggunakan getter sleeve typer
            for (int j = 0; j < maxSleeve - listShirt.get(i).getSleeveType().length(); j++) 
            {
                System.out.print(" ");
            }

            System.out.println("|");
        }
        // footer tabel
        System.out.print("+");
        for (int i = 0; i < maxID; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxNama; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxBrand; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxHarga; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxUkuran; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxMaterial; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxGender; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxWarna; i++) System.out.print("-");
        System.out.print("+");
        for (int i = 0; i < maxSleeve; i++) System.out.print("-");
        
        System.out.println("+");

        sc.close();
    }
}
