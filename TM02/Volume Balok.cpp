#include <iostream>
using namespace std;

int main(){
    int panjang, lebar, tinggi, volume;

    // Header
    cout << "Aplikasi menghitung volume balok" << endl;

    // Input
    cout << "Panjang\t:";
    cin >> panjang;

    cout << "Lebar\t:";
    cin >> lebar;

    cout << "Tinggi\t:";
    cin >> tinggi;

    // Proses
    volume = panjang * lebar * tinggi;
    cout << "Volume\t:" << volume;
}