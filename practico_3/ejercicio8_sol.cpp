#include <iostream>
using namespace std;
int main() {
    //El cielo azul parece gris desde que ya no еstas aquí
    //Todo el color ahora es blanco y negro
    //Y como no tе puedo hablar, ni regresar el tiempo atrás
    //Mejor al sol lo tapo con un dedo
    string query;
    getline(cin, query);
    char ch;
    int tuk;
    int caract = query.size();
    cout<<"[";
    for (int i=0; i<=caract; ++i)
 {
 	ch=query [i];
 	if(ch !=' ')
 	{
 		cout<<ch;
	}
	else if (ch==' ')
	{
		cout<<"]"<<endl<<"[";
	}
 } 
    cout<<"]";
    
    return 0;
}
