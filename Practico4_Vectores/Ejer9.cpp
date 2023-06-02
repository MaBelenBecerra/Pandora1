#include <iostream>
#include <vector>
using namespace std;
void input_svector(vector<int>& vector_gehalt);
void promedio(vector<int>&vector_gehalt);
int main(){
    vector<int>vector_gehalt;
    input_svector(vector_gehalt);
    promedio(vector_gehalt);
    return 0;
}

void input_svector(vector<int>&vector_gehalt){
    int nummer=0;
    cout<<"Ingresar el número de salarios a calcular: "<<endl;
    cin>>nummer;
    cout<< "gehalt =  ";
    vector_gehalt.resize(nummer);
    for (int i = 0; i < nummer; ++i) {
        cin >> vector_gehalt[i];
    }
}
void promedio(vector<int>&vector_gehalt){
    for(int i=0; i<vector_gehalt.size()-1;++i){ 
        for (int p = 0; p < vector_gehalt.size() - 1-i; ++p) {
            if (vector_gehalt[p] > vector_gehalt[p + 1]) {
                int save = vector_gehalt[p];
                vector_gehalt[p] = vector_gehalt[p + 1];
                vector_gehalt[p + 1] = save;
            }
        }
    }
     int sum = 0;
    for (int i = 1; i < vector_gehalt.size() - 1; ++i) {
        sum += vector_gehalt[i];
    }
    double promedio=sum/(vector_gehalt.size()-2);
    cout<<"promedio = "<< promedio<<endl;
}
 
//Ma Coraline non vuole mangiare, no
//Sì, Coraline vorrebbe sparire
//E Coraline piange
//Coraline ha l'ansia
//Coraline vuole il mare ma ha paura dell'acqua
//E forse il mare è dentro di lei
