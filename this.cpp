#include <iostream>
using namespace std;

class buku {
    string judul;

    public:
    string setget (string judul) {
        this->judul = judul; //nilai parameter judul disimpan ke dalam variabel anggota judul
        return this->judul; //nilai variabel anggota judul dikembalikan sebagai hasil fungsi
    }
};

int main (){
    buku bukunya;
    cout << bukunya.setget("Matematika") ;
    return 0;

};