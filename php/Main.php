<!-- /*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 2 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/  -->
<?php
require('Shirt.php'); // include file child class terkecil

$listShirt = []; // buat array untuk menampung data

$listShirt[0] = new Shirt("Pink", "Pendek"); // objek pertama, menggunakan konstruktor dan method set
$listShirt[0]->set_id_product(1); 
$listShirt[0]->set_name("Kaos DPMB"); 
$listShirt[0]->set_brand("Kemakom"); 
$listShirt[0]->set_price("100000"); 
$listShirt[0]->set_size(40); 
$listShirt[0]->set_material("Katun"); 
$listShirt[0]->set_gender("Male");  

$listShirt[1] = new Shirt("Coklat", "Pendek"); // objek kedua, menggunakan konstruktor dan method set
$listShirt[1]->set_id_product(12002); 
$listShirt[1]->set_name("Kaos Arya"); 
$listShirt[1]->set_brand("Uniqlo"); 
$listShirt[1]->set_price("249000"); 
$listShirt[1]->set_size(20); 
$listShirt[1]->set_material("Beton"); 
$listShirt[1]->set_gender("Male");  

$listShirt[2] = new Shirt("HijauTelurAsin", "Panjang"); // objek ketiga, menggunakan konstruktor dan method set
$listShirt[2]->set_id_product(24); 
$listShirt[2]->set_name("Kaos Tattha"); 
$listShirt[2]->set_brand("Exentrum"); 
$listShirt[2]->set_price("300000"); 
$listShirt[2]->set_size(10); 
$listShirt[2]->set_material("Cat"); 
$listShirt[2]->set_gender("Female");

?>
<!-- view data dengan tabel setelah di create data -->
<h3>List Shirt</h3>
<table border=1>
<tr>
    <!-- masing masing atribut -->
    <th>ID</th> 
    <th>Nama</th>
    <th>Brand</th>
    <th>Ukuran</th>
    <th>Material</th>
    <th>Gender</th>
    <th>Warna</th>
    <th>Jenis Lengan </th>
</tr>
<?php // perulangan untuk setiap data shirt
foreach ($listShirt as $kaos) 
{
    echo "<tr>";
    echo "<td>" . $kaos->get_id_product() . "</td>"; // getter id
    echo "<td>" . $kaos->get_name() . "</td>"; // getter nama
    echo "<td>" . $kaos->get_brand() . "</td>"; // getter brand
    echo "<td>" . $kaos->get_size() . "</td>"; // getter size
    echo "<td>" . $kaos->get_material() . "</td>"; // getter material
    echo "<td>" . $kaos->get_gender() . "</td>"; // getter gender
    echo "<td>" . $kaos->get_color() . "</td>"; // getter color
    echo "<td>" . $kaos->get_sleeve_type() . "</td>"; // getter sleeve type
    echo "</tr>";
}
?>

</table>
<?php

?>