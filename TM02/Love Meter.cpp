#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string nama1, nama2;
    int score;

    cout << "Masukkan nama pertama: ";
    getline(cin, nama1);
    cout << "Masukkan nama kedua: ";
    getline(cin, nama2);

    srand(time(0));
    score = rand() % 101;

    cout << "Tingkat kecocokan " << nama1 << " ❤️ " << nama2 
         << " adalah " << score << "%" << endl;
}
