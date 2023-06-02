#include <iostream>
#include "ejercicio1_funciones_Blindajeytipodedatos.h"
using namespace std;

void bot()
{
    cout<<"_____________"<<endl;
    cout<<"|  /\"\"\"\"\"\\  |"<<endl;
    cout<<"| /       \\ |"<<endl;
    cout<<"| | 0   0 | |"<<endl;
    cout<<"| |   v   | |"<<endl;
    cout<<"| \\  ___  / |"<<endl;
    cout<<"|  \\_____/  |"<<endl;
    cout<<"-------------"<<endl;
}
void change()
{
  string x =  "sombrero";
  string y = "sarten";
  cout << "La variable x es "<< x << endl;
  cout << "La variable y es "<< y << endl;
  cout <<endl;
  // Nueva string
  string w = "";
  w = x;
  x = y;
  y = w;
  cout << "La variable x es "<< x << endl;
  cout << "La variable y es "<< y << endl;
}
void middle()
{
    int x, y, z, d; 
    x=50;
    y=x-1;
    z=x+1; 
    d=2*x;
    cout << "El número "<<x<<" está entre "<<y<< " y "<<z<<"."<<endl; //mostrar las variables en el texto 
    cout<<"El doble de "<<x<<" es "<<d<<"."<<endl;
}
void wood()
{
     int wood_balance ,w1 ,w2 ,w3 ,d1 ,d2 ,d3 ,h1 ,h2 ,h3 ,s ;
 wood_balance=1000;
    w1=d1=h1=w2=d2=h2=w3=d3=h3=1; 
    s=w1*d1+2*(w1*h1+d1*h1);
    cout<<"Madera contrachapada restante:"<<(wood_balance-=s)<<endl;
   s=w2*d2+2*(w2*h2+d2*h2);
    cout<<"Madera contrachapada restante:"<<(wood_balance-=s)<<endl;
    s=w3*d3+2*(w3*h3+d3*h3);
    cout<<"Madera contrachapada restante:"<<(wood_balance-=s)<<endl;
}
