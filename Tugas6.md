# Tugas Modifikasi P10
'''
#include <iostream>
#include <string>
using namespace std;

class MotorScopy {
private:
    string type;
    int harga;
    int kapasitas;
    string modelBodi;

public:
    // Constructor
    MotorScopy(string t, int h, int k, string m) : type(t), harga(h), kapasitas(k), modelBodi(m) {}

    // Getter methods
    string getType() const {
        return type;
    }

    int getHarga() const {
        return harga;
    }

    int getKapasitas() const {
        return kapasitas;
    }

    string getModelBodi() const {
        return modelBodi;
    }

    // Setter methods
    void setType(string t) {
        type = t;
    }

    void setHarga(int h) {
        harga = h;
    }

    void setKapasitas(int k) {
        kapasitas = k;
    }

    void setModelBodi(string m) {
        modelBodi = m;
    }

    // Method to display motor information
    void display() const {
        cout << "Type: " << type << endl;
        cout << "Harga: " << harga << endl;
        cout << "Kapasitas: " << kapasitas << " cc" << endl;
        cout << "Model Bodi: " << modelBodi << endl;
    }
};

int main() {
    // Membuat objek MotorScopy
    MotorScopy motor1("Sporty", 20000000, 150, "Adventure");
    
    // Menampilkan informasi motor
    cout << "Informasi Motor 1:" << endl;
    motor1.display();

    // Mengubah harga motor
    motor1.setHarga(21000000);

    // Menampilkan informasi motor setelah perubahan harga
    cout << "\nInformasi Motor 1 setelah perubahan harga:" << endl;
    motor1.display();

    return 0;
}
# capture hasil running
![Screenshot (29)](https://github.com/wiliagung22/TugasPemograman/assets/156889886/7746d84e-5222-479d-8414-cd8a801d1345)
