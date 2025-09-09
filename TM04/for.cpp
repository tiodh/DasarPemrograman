#include <iostream>
using namespace std;

int main()
{
    cout << "\nMenggunakan For: ";
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "\nMenggunakan For Step 2: ";
    for (int i = 0; i <= 10; i+=2)
    {
        cout << i << endl;
    }

    cout << "\nMenggunakan For Descending: ";
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    cout << "\nMenggunakan For with bug: ";
    for (int i = 10; i > 0; i++)
    {
        cout << i << endl;
    }
}