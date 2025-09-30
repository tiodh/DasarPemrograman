#include <iostream>
using namespace std;

int main(){
    int nilai_algo, nilai_pbo, nilai_pweb;
    
    cout << "Masukkan nilai Algo: ";
    cin >> nilai_algo;

    cout << "Masukkan nilai PBO: ";
    cin >> nilai_pbo;

    cout << "Masukkan nilai PWeb: ";
    cin >> nilai_pweb;

    int BATAS_BAWAH = 75;

    if (nilai_algo > BATAS_BAWAH || nilai_pbo > BATAS_BAWAH || nilai_pweb > BATAS_BAWAH){
        cout << "Selamat anda boleh wisuda";
    }else{
        cout << "Maaf anda belum boleh wisuda";
    }
}