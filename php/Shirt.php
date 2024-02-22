<!-- /*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/  -->

<?php
require('Clothing.php'); // include file class parent
class Shirt extends Clothing // class shirt mewarisi class clothing
{
  
    private $color; // atribut untuk kelas shirt
    private $sleeve_type;

    public function __construct($color = "", $sleeve_type = "") // konstruktor dengan parameter
    {
        // mengset semua atribut
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    // setter dan getter untuk setiap atribut
    public function set_color($color) {
        $this->color = $color;
    }

    public function set_sleeve_type($sleeve_type) {
        $this->sleeve_type = $sleeve_type;
    }

    public function get_color() {
        return $this->color;
    }

    public function get_sleeve_type() {
        return $this->sleeve_type;
    }
}
?>