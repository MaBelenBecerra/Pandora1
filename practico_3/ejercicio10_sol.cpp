#include <iostream>
using namespace std;
int main() {
    //If you dance I'll dance
    //And if you don't I'll dance anyway
    //Give peace a chance
    //Let the fear you have fall away
    //I've got my eye on you
    
 int bill;
 int sum = 0;
 do {
 cin >> bill;
 
 if (bill <= 0) 
 {
 
 }else{
 cout << "Income: " << bill << endl;
 sum += bill;
 }
 } while (bill != 0);
 cout << "Total income: " << sum << endl;
}
