#include <iostream>
using namespace std;
int main() {
    //Tú y yo
    //Cantándole a las amapolas
    //Riéndonos que el río llora
    //Y escuchando lo que te escribí
    float y,x,dif;
    cin>>y>>x;
    if (y==x)
    {
        cout<<"Naranja dividida en dos partes iguales."<<endl;
    }else if (y>x)
    {
        dif=y-x;
        cout<<"Cortar "<<dif<<" la primera parte"<<endl;
    }else if (x>y)
    {
        dif=x-y;
        cout<<"Cortar "<<dif<<" la segunda parte"<<endl;
    }
    else{
    cout<<"?"<<endl;    
    }
    return 0;
}
