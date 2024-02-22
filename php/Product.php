<!-- /*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/  -->

<?php
class Product // class product
{
    private $id_product; // atribut untuk class product
    private $name; 
    private $brand;
    private $price;

    public function __construct($id_product = 0, $name = "", $brand = "", $price = "") // konstruktor dengan parameter
    { // mengset semua atribut
        $this->id_product = $id_product;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // setter dan getter untuk setiap atribut
    public function set_id_product($id) {
        $this->id_product = $id;
    }

    public function set_name($name) {
        $this->name = $name;
    }

    public function set_brand($brand) {
        $this->brand = $brand;
    }

    public function set_price($price) {
        $this->price = $price;
    }

    public function get_id_product() {
        return $this->id_product;
    }

    public function get_name() {
        return $this->name;
    }

    public function get_brand() {
        return $this->brand;
    }

    public function get_price() {
        return $this->price;
    }
}
?>