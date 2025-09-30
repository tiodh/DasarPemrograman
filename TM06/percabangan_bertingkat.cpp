#include <iostream>
using namespace std;

int main()
{
    int nilai;
    string nilai_huruf;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    
    if(nilai>80)
    {
        nilai_huruf = "A";
    }else if(nilai > 70)
    {
        nilai_huruf = "B";
    }
    else if(nilai > 60)
    {
        nilai_huruf = "C";
    }else if(nilai > 50)
    {
        nilai_huruf = "D";
    }else{
        nilai_huruf = "E";
    }

    cout << "Nilai huruf adalah " << nilai_huruf;
}