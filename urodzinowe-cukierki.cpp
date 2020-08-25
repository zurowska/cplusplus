#include <iostream>

using namespace std;

int uczniowie,cukierki,x,y;

int main()
{
    cout << "Ilu uczniów jest w Twojej klasie: ";
    cin >> uczniowie;
    
    cout << "Ile cukierków kupiła Twoja mama: ";
    cin >> cukierki;
    
    x = cukierki/(uczniowie-1);
    cout << "Cukierków dla każdego ucznia: " << x;
    y = cukierki-x*(uczniowie-1);
    cout << endl << "Dodatkowych cukierków zostanie:" << y;

    return 0;
}


