#include <iostream>
using namespace std;
int main() {
    //So I'll use my voice, I'll be so fucking rude
    //Words, they always win, but I know I'll lose
    //And I'd sing a song that'd be just ours
    //But I sang 'em all to another heart
    //And I wanna cry, I wanna learn to love
    //But all my tears have been used up
    double N,A,B,X,Y;
    cin>>N>>A>>B>>X>>Y;
        if (N>B)
        {
            cout<<N-(N*Y/100)<<endl;
        }else if (N>A)
        {
            cout<<N-(N*X/100)<<endl;
        }else{
            cout<<N<<endl;
    }
    return 0;
}
