#include <iostream>
using namespace std;

int main(){
    int nilai;
    char nilai_huruf;

    cout << "Masukkan nilai yang akan dikonversi: ";
    cin >> nilai;

    if(nilai>80){
        nilai_huruf = 'A';
    }else if(nilai>70){
        nilai_huruf = 'B';
    }else if(nilai>60){
        nilai_huruf = 'C';
    }else if(nilai>50){
        nilai_huruf = 'D';
    }else{
        nilai_huruf = 'E';
    }

    cout << "Nilai " << nilai << " = " << nilai_huruf;
}