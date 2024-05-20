# Program OOP Robot
'''
#include <iostream>
using namespace std;

// Deklarasi kelas
class Robot {
public:
    string nama;
    int umur;
    string mbti;

    // Metode untuk menampilkan informasi
    void perkenalan_diri() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "MBTI: " << mbti << endl;
    }
};

int main() {
    // Membuat objek dari kelas Robot 
    Robot r1;
    Robot r2;

    // Memberi nilai atribut objek
    r1.nama = "Abdul";
    r1.umur = 30;
    r1.mbti = "INFJ";

    // Memberi nilai atribut objek
    r2.nama = "Asep";
    r2.umur = 30;
    r2.mbti = "ISTJ";

    // Memanggil metode untuk menampilkan informasi
    r1.perkenalan_diri();
    r2.perkenalan_diri();

    return 0;
}
'''
# Capture Hasil Running
![Screenshot (2)](https://github.com/wiliagung22/TugasPemograman/assets/156889886/f080c6df-f5a5-4d9e-8f95-07ed25e4ebee)
# Program OOP Motor
'''
#include <iostream>
using namespace std;

// Deklarasi kelas
class Motor {
public:
    string nama;
    string model;
    int harga;
    char kapasitas;

    // Metode untuk menampilkan informasi
    void Spesifikasi_motor() {
        cout << "Nama: " << nama << endl;
        cout << "Model: " << model << endl;
        cout << "Harga: " << harga << endl;
        cout << "Kapasitas" << kapasitas << endl;
    }
};

int main() {
    // Membuat objek dari spesifikasi
    Motor m1;
    Motor m2;

    // Memberi nilai atribut objek
    m1.nama = "Scoopy";
    m1.model = "Skuter";
    m1.harga = 20;
    m1.kapasitas = 110;

    // Memberi nilai atribut objek
    m2.nama = "Stylo";
    m2.model = "ABS";
    m2.harga = 31;
    m2.kapasitas = 160;

    // Memanggil metode untuk menampilkan informasi
    m1.Spesifikasi_motor();
    m2.Spesifikasi_motor();

    return 0;
}
'''
# Capture Hasil Running
![Screenshot (3)](https://github.com/wiliagung22/TugasPemograman/assets/156889886/dc5057a8-4997-4013-a529-f4c3e4d23d63)

