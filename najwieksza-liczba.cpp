#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{
    cout<<"Podaj trzy liczby rozdzielone spacja: ";
    cin>>a>>b>>c;
    
    m=a;
    if (b>m) b=m;
    if (c>m) c=m;
    
    cout<<"Najwieksza liczba to "<<m;
    
    
 /*   if((a>=b)&&(a>=c))
    cout<<"Najwieksza liczba to: "<<a;
    
    else if((b>=a)&&(b>=c))
    cout<<"Najwieksza liczba to: "<<a;
    
    else if((c>=b)&&(c>=a))
    cout<<"Najwieksza liczba to: "<<a;
*/
    return 0;
}


