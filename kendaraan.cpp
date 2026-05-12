#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int idKendaraan;
    string namaKendaraan;

public:
    // Constructor 1: Tanpa parameter (nilai default)
    Kendaraan() {
        idKendaraan = 0;
        namaKendaraan = "Tidak Diketahui";
        cout << "[Constructor 1] Objek dibuat dengan nilai default.\n";
    }

    // Constructor 2: Hanya dengan parameter id
    Kendaraan(int id) {
        idKendaraan = id;
        namaKendaraan = "Tidak Diketahui";
        cout << "[Constructor 2] Objek dibuat dengan ID saja.\n";
    }

    // Constructor 3: Hanya dengan parameter nama
    Kendaraan(string nama) {
        idKendaraan = 0;
        namaKendaraan = nama;
        cout << "[Constructor 3] Objek dibuat dengan Nama saja.\n";
    }

    // Constructor 4: Dengan parameter lengkap (id dan nama)
    Kendaraan(int id, string nama) {
        idKendaraan = id;
        namaKendaraan = nama;
        cout << "[Constructor 4] Objek dibuat dengan parameter lengkap.\n";
    }

    // Metode untuk menampilkan informasi kendaraan
    void tampilkanInfo() const {
        cout << "  ID Kendaraan   : " << idKendaraan << "\n";
        cout << "  Nama Kendaraan : " << namaKendaraan << "\n";
    }
};

int main() {
    cout << "========================================\n";
    cout << "       PROGRAM MANAJEMEN KENDARAAN      \n";
    cout << "========================================\n\n";

    // Objek 1: Constructor tanpa parameter
    cout << "--- Kendaraan 1 ---\n";
    Kendaraan k1;
    k1.tampilkanInfo();
    cout << "\n";

    // Objek 2: Constructor dengan parameter id saja
    cout << "--- Kendaraan 2 ---\n";
    Kendaraan k2(101);
    k2.tampilkanInfo();
    cout << "\n";

    // Objek 3: Constructor dengan parameter nama saja
    cout << "--- Kendaraan 3 ---\n";
    Kendaraan k3("Honda Beat");
    k3.tampilkanInfo();
    cout << "\n";

    // Objek 4: Constructor dengan parameter lengkap
    cout << "--- Kendaraan 4 ---\n";
    Kendaraan k4(202, "Toyota Avanza");
    k4.tampilkanInfo();
    cout << "\n";

    cout << "========================================\n";
    cout << "            PROGRAM SELESAI             \n";
    cout << "========================================\n";

    return 0;
}