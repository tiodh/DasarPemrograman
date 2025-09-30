#include <iostream>
using namespace std;

int main()
{
    int nilai_algo, nilai_sbd, nilai_pbo;

    cout << "Masukkan nilai Algo: ";
    cin >> nilai_algo;

    cout << "Masukkan nilai SBD: ";
    cin >> nilai_sbd;

    cout << "Masukkan nilai PBO: ";
    cin >> nilai_pbo;

    int min_bound = 70;
    string success_msg = "Selamat, anda Sarjana Komputer";
    string fail_msg = "Maaf, anda harus mengulang";

    if (nilai_algo > min_bound){
        if (nilai_pbo > min_bound){
            if (nilai_sbd > min_bound){
                cout << success_msg;
            }else{
                cout << fail_msg;
            }
        }else{
            cout << fail_msg;
        }
    }else{
        cout << fail_msg;
    }
}