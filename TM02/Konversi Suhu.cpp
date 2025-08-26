#include <iostream>
using namespace std;

int main() {
    float celcius, fahrenheit, kelvin;

    cout << "Masukkan suhu dalam Celsius: ";
    cin >> celcius;

    fahrenheit = (celcius * 9/5) + 32;
    kelvin = celcius + 273.15;

    cout << "Fahrenheit\t: " << fahrenheit << endl;
    cout << "Kelvin\t\t: " << kelvin << endl;
}
