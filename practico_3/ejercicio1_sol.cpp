#include <iostream>
using namespace std;
int main() {
    //Lässt dich hart zu Boden geh'n
    //Und die Welt zählt laut bis zehn
    
    string cAsa1,cAsa2,cAsa3,cAsa;
    cin>>cAsa1>>cAsa2>>cAsa3>>cAsa;
    if ((cAsa1!=cAsa2)&&(cAsa2!=cAsa3)&&(cAsa1!=cAsa3))
    {
    if (cAsa1==cAsa)
    {
        cout<<"Entrar a la casa 1"<<endl;
    }
    else if (cAsa2==cAsa)
    {
        cout<<"Entrar a la casa 2"<<endl;
    }
    else if (cAsa3==cAsa)
    {
        cout<<"Entrar a la casa 3"<<endl;
    }
    else
    {
        cout<<"Busca en otro lugar"<<endl;
    }
    }
    else{
        cout<<"No hay casas de colores similares";
    }
    return 0;
}
