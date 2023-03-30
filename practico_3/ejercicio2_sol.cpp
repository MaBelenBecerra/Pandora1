#include <iostream>
using namespace std;
int main() {
    //¿Cómo fue que me dejaste de amar?
    //Yo aún podía soportar
    //Tu tanta falta de querer
    //Ven y cuéntame la verdad
    //Ten piedad
    //Y dime por qué
     int x,y,z;
    cin>>x>>y>>z;
    if (((x<=1000000)&&(x>=-(1000000)))&&((y<=1000000)&&(y>=-(1000000)))&&((z<=1000000)&&(z>=-(1000000))))
    {
        if (z!=(x+y))
        {
            cout<<"Error. La suma de "<<x<<" y "<<y<<" es "<<x+y<<endl;
        }
    }
    return 0;
}
