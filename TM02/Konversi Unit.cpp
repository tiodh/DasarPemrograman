#include <iostream>
using namespace std;

int main() {
    float meter;
    cout << "Masukkan panjang (meter): ";
    cin >> meter;

    cout << "Centimeter : " << meter * 100 << endl;
    cout << "Millimeter : " << meter * 1000 << endl;
    cout << "Kilometer  : " << meter / 1000 << endl;
}
