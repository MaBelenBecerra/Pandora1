#include <iostream>
using namespace std;
int main() {
    //It's cuffin' season
    //And all the girls are leavin' to get a big boy (Big boy)
    //I need a big boy ((Big boy))
    //I want a big boy
    char b;
    cin>>b;
    int n =char(b);
    if ((n>=65)&&(n<=90))
    {
        cout<<"El caracter está en mayúsculas :D";
    }else if ((n>=97)&&(n<=122))
    {
        cout<<"El caracter está en minúsculas ;D<";
    }
    else{
        cout<<"No es un caracter :/";
    }
    
    return 0;
}
