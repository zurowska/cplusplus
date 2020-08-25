/******************************************************************************

VSR - Predkość średnia
Pociąg z miejscowości A do B jedzie z prędkością v1, a wraca z miejscowości B do A z prędkością v2. Obliczyć średnią prędkość na całej trasie. Uwaga: Dane wejściowe będą tak dobrane, aby wynik był liczba całkowitą.

Wejście
Na wejściu znajduje się dokładnie jedna liczba całkowita t (1<=t<=1000) oznaczająca liczbę zestawów danych. W wierszach od 2 do t+1 znajdują się dwie liczby całkowite oddzielone spacja v1 oraz v2 (1<=v1,v2<=10000).

Wyjście
Wyjście składa się z t wierszy. W każdym wierszu powinna znaleźć się dokładnie jedna liczba całkowita oznaczająca średnią prędkość.

*******************************************************************************/
#include <iostream>

using namespace std;

int v1,v2,ile;

int main()
{
    cin>>ile;
    for(int i=1; i<=ile; i++)
    {
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }

    return 0;
}

