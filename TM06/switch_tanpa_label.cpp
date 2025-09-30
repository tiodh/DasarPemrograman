#include <iostream>
using namespace std;

int main(){
    int menu;
    cout << "Pilih menu:";
    cin >> menu;
    switch (menu)
    {
    case 1 :
        cout << "Biodata" << endl;
        break;
    case 2:
        cout << "KRS" << endl;
    case 3:
        cout << "LHS" << endl;
    case 4:
        cout << "MMP" << endl;
    default:
        cout << "Tidak ada menu yang dipilih" << endl;
    }
    cout << "Terimakasih";
}   