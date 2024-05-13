#include<iostream>
#include<string>
using namespace std;

class Mahasiswa {
public:
    static int nim;
    string nama;

public:
    Mahasiswa() {
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim) {
        nim = iNim;
    }
    Mahasiswa(string iNama) {
        nama = iNama;
    }

    Mahasiswa(int iNim, string iNama) {
        nim = iNim;
        nama = iNama;
    }

    void cetak() {
        cout << "NIM   = " << nim << endl;
        cout << "Nama  = " << nama << endl;
        cout << endl;
    }

};

int main() {
    Mahasiswa mhs1;
    Mahasiswa mhs2(21);
    Mahasiswa mhs3("Agung");
    Mahasiswa mhs4(25, "CaptAAI");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
    return 0;
}