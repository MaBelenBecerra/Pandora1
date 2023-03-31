#include <iostream>
using namespace std;
int main() {
    //I wanna be your left hand man
    //I love you when you're singing that song and
    //I got a lump in my throat 'cause
    //You're gonna sing the words wrong
    string query;
    getline(cin, query);
    char ch;
    int caract = query.size();
    for (int i=0; i<=caract; ++i)
 {
 	ch=query [i];
 	if (ch==' ')
	{
		cout<<i<<endl;
	}
 }
 cout<<caract<<endl;
    
    return 0;
}
