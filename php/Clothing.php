<!-- /*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/  -->

<?php
require('Product.php'); // include file class parent
class Clothing extends Product // class clothing mewarisi class product
{  
    private $size; // atribut untuk kelas clothing
    private $material;
    private $gender;

    public function __construct($size = 0, $material = "", $gender = "") // konstruktor dengan parameter
    {
        // mengset semua atribut
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // setter dan getter untuk semua atribut
    public function set_size($size) {
        $this->size = $size;
    }

    public function set_material($material) {
        $this->material = $material;
    }

    public function set_gender($gender) {
        $this->gender = $gender;
    }

    public function get_size() {
        return $this->size;
    }

    public function get_material() {
        return $this->material;
    }

    public function get_gender() {
        return $this->gender;
    }
}

?>