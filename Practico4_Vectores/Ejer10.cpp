#include <iostream>
#include <vector>
using namespace std;
//They call him Hermit the Frog
//He's looking for a dog
//Did you find your b*tch in me?
//Oh, you're abominable socially
//You're just a little bit too much like me
void input_Hoehen(vector<int>&Hoehen);
int heightChecker(vector<int>& Hoehen);

int main(){
    vector<int> Hoehen;
    input_Hoehen(Hoehen);
    int result= heightChecker(Hoehen);
    cout<<result;
    return 0;
}
void input_Hoehen(vector<int>&Hoehen){
    int nummer=0;
    cout<<"Ingresar el número de estudiantes en la fila: "<<endl;
    cin>>nummer;
    Hoehen.resize(nummer);
    cout <<"Rellenar la matriz"<<endl;
    for (int i = 0; i < nummer; ++i) {
        cin >> Hoehen[i];
    }
}
int heightChecker(vector<int>& Hoehen){
    vector<int> expected = Hoehen;
    for(int i=0; i<Hoehen.size()-1;++i){
        for (int p = 0; p < Hoehen.size() - 1-i; ++p) {
             if (expected[p] > expected[p + 1]) {
                int save = expected[p];
                expected[p] = expected[p + 1];
                expected[p + 1] = save;
            }
        }
    }
    int verifiziert= 0;
    for (int i = 0; i < Hoehen.size(); ++i) {
        if (Hoehen[i] != expected[i]) {
            ++verifiziert;
        }
    }

    return verifiziert;
}

//and you gonna be happy
//(Ooh-ooh) and you gonna be happy
//Turn this all around
//모든 게 새로운, zero o'clock
