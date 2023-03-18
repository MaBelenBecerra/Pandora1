#include <iostream>
using namespace std;
int main() {
    //Baby, I'm dancing in the dark
    //With you between my arms
    //Barefoot on the grass
    //Listening to our favorite song
     int num;
    string docs;
    cin>>num;
    string numero=to_string(num);
    docs=numero+" documentos encontrados"s;
    //código anterior
    if (num==0)
    {
        cout<<"No se encontraron documentos"<<endl;
    }else if (num==1)
    {
        cout<<"Se encontró un documento"<<endl;
    }else {
    cout<<docs<<endl;
    }
    
    return 0;
}
