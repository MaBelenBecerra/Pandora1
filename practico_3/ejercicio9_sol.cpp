#include <iostream>
using namespace std;
int main() {
    //Ti sorprenderà
    //Ti consumerà
    //Il pianto sordo
    //Triste, avvelenato
    bool nom;
    
    cout<<"Ingrese 10 valores: " <<endl;
    for (int i=0; i<=10 ; i++)
    {
        cin>>nom;
        if (nom==1)
        {
            cout<<"Ñam Ñam Ñam :>"<<endl;
    
        }
        if (nom==0)
        {
            cout<<"Ya no hay :<"<<endl;
        break;
        }
    }
    
    return 0;
}
