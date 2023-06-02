#include <iostream>
#include <vector>
using namespace std;
void user_input(vector<int>&temperatur);
void calculo(vector<int>temperatur);
int main(){
    int N;
    cout<<"Ingresar el número de días analizados: "<<endl;
    cin>>N;
    vector<int>temperatur(N);
    user_input(temperatur);
     calculo(temperatur);
}
void user_input(vector<int>&temperatur ) {
    for (int i = 0; i < temperatur.size(); ++i) {
        cout << "Ingrese la temperatur: " << i + 1 << endl;
        int wert;
        cin >> wert;
        temperatur[i] = wert;
    }
}
void calculo(vector<int>temperatur){
int zaehlen=0;
int sum = 0;
vector <int>posicion;
    for (int i = 0; i < temperatur.size(); ++i) {
        sum += temperatur[i];
    }
    int promedio=sum/(temperatur.size()-1);
    for(int i=0; i<temperatur.size();++i){
        if (promedio<=temperatur[i]){
            cout<<i<<" ";
            ++zaehlen;
        }
    }
    cout<<endl;
    cout<<zaehlen<<endl;
}

//We laugh, we cry like babies in the night
//Forever running wild in the human race
//Another day, another tale of rape
//Another ticking bomb to bury deep and detonate
//I'm not the only one who finds it hard to understand
//I'm not afraid of God, I am afraid of man
