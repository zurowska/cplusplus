#include <iostream>
#include <cmath>

using namespace std;

int x=31, T, D, o1, o2;

int main()
{
    cout<<"(1947-2020) Ile razy LA Lakers wystapili w finale NBA?" <<endl;
    cout<<"Thomas: ";
    cin>>T;
    
    cout<<"Drake: ";
    cin>>D;
    
    o1 = abs(x-T);
    o2 = abs(x-D);
    if (o1<o2) cout<<"Wygral Thomas!"; else if (o2<o1) cout<<"Wygral Drake!"; else cout<<"Remis!"<<endl;
    
    
    return 0;
}

