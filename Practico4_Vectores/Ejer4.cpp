#include <iostream>
#include <vector>
using namespace std;
void finden(vector<int>matriz, int nummer);
int main() {
    int nummer=0;
    vector <int> matriz= {1,2,3,5,4,7,6,8,10};
    finden(matriz, nummer);
    return 0;
}
void finden(vector<int>matriz, int nummer) {
    int posicion=0;
    do{
        cout<<"Ingrese el número que busca:"<<endl;
        cin>>nummer;
        for (int i = 0; i < matriz.size(); ++i) {
            if (matriz[i] == nummer) {
                 posicion=i+1;
                break;
            }
        }
        if(posicion!=0){
            cout << "El número: " << nummer << " se encuentra en la posición " << posicion << endl;
        }
        else{
            cout << "El número: " << nummer << " no está en la matriz" << endl;
        }
    } while (nummer!=-1);
}
