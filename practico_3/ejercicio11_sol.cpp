 
#include <iostream>
using namespace std;
int main() {
    //
    int a,mult;
    cin>>a;
    int fact=1;
    while (a<0)
    {
        cout<<"No estan permitido numeros negativos, intenta de nuevo"<<endl;
        cin>>a;
    }
    while (a>=14)
    {
        cout<<"El numero a calcular es demasiado grande, intenta de nuevo"<<endl;
        cin>>a;
    }
    if (a>=0)
    {
        for (int i=1; i<=a; ++i)
        {
            mult=a*i;
            fact=mult*fact;
        }
        cout<<fact;
    }
    return 0;
}

//mechipesorry
