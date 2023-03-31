#include <iostream>
using namespace std;
int main() {
    //No estaba esperando nada
    //De encontrarme contigo anoche
    //Solo era una más
    //Una noche linda, algo especial
    int jake,tonowari;
    cin>>jake>>tonowari;
    if (jake<tonowari)
    {
    for (int i=jake;i<=tonowari;++i)
    {
        cout<<i<<endl;
    }}
    else if (jake>tonowari)
    {
    for (int i=jake;i>=tonowari;--i)
    {
        cout<<i<<endl;
    }}
    
    return 0;
}
