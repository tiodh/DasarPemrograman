#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    float ipk;
};

int main(){
    mahasiswa mhs1;
    mhs1.nama = "Tio Dharmawan";
    mhs1.nim = "252410103001";
    mhs1.ipk = 3.33;

    cout << "Nama: " << mhs1.nama << endl;
    cout << "NIM: " << mhs1.nim << endl;
    cout << "IPK: " << mhs1.ipk << endl;
}