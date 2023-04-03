#include <iostream>
using namespace std;
int main() {
    //You go down just like Holy Mary
    //Mary on a, Mary on a cross
    //Not just another bloody Mary
    //Mary on a, Mary on a...
    
int abba,b,mult,pot;
    cin>>abba>>b;
    if (b>0)
    {
        for (int i=0; i<=b; ++i)
        {
            mult=abba*abba;
            pot=mult*abba;
        }
        cout<<pot;
    }else if (b==0)
    {
        cout<<"1";
    }else if (b<0)
    {
        for (int i=1;i<=(-b);++i)
        {
            mult=abba*abba;
            pot=mult*abba;
        }
        cout<<"1/"<<pot;
    }
}
