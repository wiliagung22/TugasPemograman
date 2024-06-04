# Tugas 7
'''
#include <iostream>
using namespace std;

// Kelas Kalkulator dengan metode tambah, kurang, kali, dan bagi
class Kalkulator {
public:
    int tambah(int a, int b) {
        return a + b;
    }

    int kurang(int a, int b) {
        return a - b;
    }

    int kali(int a, int b) {
        return a * b;
    }

    double bagi(int a, int b) {
        return static_cast<double>(a) / b;
    }
};

// Kelas Penghitung dengan metode luasPersegi dan kelilingPersegi
class Penghitung {
public:
    int luasPersegi(int panjang, int lebar) {
        return panjang * lebar;
    }

    int kelilingPersegi(int panjang, int lebar) {
        return 2 * (panjang + lebar);
    }
};

void tampilkanHasilKalkulator(Kalkulator& kalkulator) {
    int hasilTambah = kalkulator.tambah(5, 3);
    int hasilKurang = kalkulator.kurang(5, 3);
    int hasilKali = kalkulator.kali(5, 3);
    double hasilBagi = kalkulator.bagi(5, 3);

    cout << "5 + 3 = " << hasilTambah << endl;
    cout << "5 - 3 = " << hasilKurang << endl;
    cout << "5 * 3 = " << hasilKali << endl;
    cout << "5 / 3 = " << hasilBagi << endl;
}

void tampilkanHasilPenghitung(Penghitung& penghitung) {
    int panjang = 5;
    int lebar = 3;
    int luasPersegi = penghitung.luasPersegi(panjang, lebar);
    int kelilingPersegi = penghitung.kelilingPersegi(panjang, lebar);

    cout << "Luas persegi dengan panjang = " << panjang << " dan lebar = " << lebar << " adalah " << luasPersegi << endl;
    cout << "Keliling persegi dengan panjang = " << panjang << " dan lebar = " << lebar << " adalah " << kelilingPersegi << endl;
}

int main() {
    // Membuat objek dari kelas Kalkulator dan Penghitung
    Kalkulator kalkulator;
    Penghitung penghitung;

    // Menampilkan hasil kalkulasi
    tampilkanHasilKalkulator(kalkulator);
    tampilkanHasilPenghitung(penghitung);

    return 0;
}
# Capture 
![Screenshot (31)](https://github.com/wiliagung22/TugasPemograman/assets/156889886/ca11f23c-63ec-4ed9-837b-ce1df7dfdb5a)
