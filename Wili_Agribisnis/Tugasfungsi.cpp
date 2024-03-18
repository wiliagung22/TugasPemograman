#include <iostream>

// Deklarasi fungsi 
double hitungluaspersegipanjang(double panjang, double lebar);
double hitungkelilingpersegipanjang (double panjang, double lebar);

int main() {
    //Meminta pengguna memasukan panjang dan Lebar
    double Panjang;
    std::cout << "Masukan lebar persegi panjang: ";
    std::cin >> Panjang;

    double lebar;
    std::cout << "Masukan lebar persegi panjang: ";
    std::cin >> lebar;

    // Memanggil fungsi untuk menghitung Luas dan keliling persegi panjang 
    double luas = hitungluaspersegipanjang(Panjang,lebar);
    double Keliling = hitungkelilingpersegipanjang(Panjang,lebar);

    // Menampilkan hasil 
    std::cout << "Luas Persegi Panjang: " << luas << std::endl;
    std::cout << "keliling persegi panjang: " << Keliling << std::endl;

    return 0;
}

// ImpLementasi fungsi menghitung luas persegi panjang 
double hitungluaspersegipanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Implementasi fungsi menghitung keliling persegi panjang
double hitungkelilingpersegipanjang(double panjang, double lebar) {
    return 2 * (panjang * lebar);
}
