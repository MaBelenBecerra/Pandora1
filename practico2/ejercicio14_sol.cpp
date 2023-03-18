#include <iostream>
using namespace std;
int main() {
    //Snapping one, two
    //Where are you?
    //You're still in my heart
    //Snapping three, four
    //Don't need you here anymore
    //Get out of my heart
    //'Cause I might snap
    int floors1,floors2,floors3,floors;
    //floors para evitar la función punto flotante
    string home1,home2,home3,home;
    cin>>home1>>floors1;
    cin>>home2>>floors2;
    cin>>home3>>floors3;
    cin>>home>>floors; //Testimonio 
    int i=0;
    if(home1==home&&floors1==floors)
    {
        cout<<1<<endl;
    }else if(home2==home&&floors2==floors)
    {
        cout<<2<<endl;
    }else if(home3==home&&floors3==floors)
    {
        cout<<3<<endl;
    }else{
    if(home1==home||floors1==floors)
    {
        cout<<1<<endl;
    }if(home2==home||floors2==floors)
    {
        cout<<2<<endl;
    }
    if(home3==home||floors3==floors)
    {
        cout<<3<<endl;
    }}
    
    return 0;
}
