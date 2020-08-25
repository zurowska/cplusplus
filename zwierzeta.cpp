#include <iostream>

using namespace std;

class Zwierze
{
    public:
    
    //atrybuty
    string gatunek;
    string imie;
    int wiek;
    //metody
    void dodaj_zwierze()
    {
        cout<<"DODAWANIE NOWEGO ZWIERZECIA DO BAZY: "<<endl;
        cout<<"Podaj gatunek: ";
        cin>>gatunek;
        cout<<"Podaj imie: ";
        cin>>imie;
        cout<<"Podaj wiek: ";
        cin>>wiek;
    }
    
    void daj_glos()
    {
        if (gatunek=="pies") cout<<imie<<" lat "<<wiek<<": Hau hau!";
        else if (gatunek=="koza") cout<<imie<<" lat "<<wiek<<": Beee!";
        else if (gatunek=="krowa") cout<<imie<<" lat "<<wiek<<": Muu!";
        else cout<<"Nieznany gatunek.";
    }
    
};

int main()
{
    Zwierze a1;
    a1.dodaj_zwierze();
    a1.daj_glos();

    return 0;
}

