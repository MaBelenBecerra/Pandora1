#include <iostream>
using namespace std;
int main() {
    //Could you hold me through the night?
    //Put your lips all over my mine
    //Salty face when I start cryin'
    //Could you be my first time?
    //Eat me up like apple pie
    //Make me not wanna die
    //Love me rough and let me fly
    //Get me up, yeah, get me high
    //Tie me down, don't leave my side
    //Don't be a waste of my time
    int edad,experiencia;  
  
    cin>>edad>>experiencia;    
    //Introduzco las variables de edad y experiencia
    
    if (edad>=18) 
    //Si la edad es mayor o igual a 18 se ejecuta el código
    {
        if (experiencia>=5)    
        //Si la experiencia es >= 5, se ejecuta el sgt código
        {
            cout<<"Director senior";     
            //Muestra el texto entre "" :D
        } else if (experiencia>=3) 
        //Si es que se cumple la condición anterior y la experiencia es >= 3, se ejecuta el sgt código
        {
            cout<<"Director de proyecto";   
            //Muestra (again) el texto entre ""
        } else{            
            //Si es que no se cumple la condición anterior se ejectuta el sgt código
            cout<<"Coordinador de proyecto";
            //Muestra lo que ya sabemos :) el texto entre ""
        }
    }
    else {      
        //si es que no se cumple nada de lo anterior, se ejecuta el sgt código
        cout<<"No cuenta con la edad requerida para el puesto, lo sentimos";     
        //Muestra el texto
    }
    
    return 0;
}
