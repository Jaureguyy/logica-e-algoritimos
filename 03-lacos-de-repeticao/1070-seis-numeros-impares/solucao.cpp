#include <iostream>
using namespace std;

int main(){

    int X, impar=0;

    cin >> X;

    while(impar<6){
        if(X%2!=0){
            cout << X << endl;
            impar++;
        }
        X++;
    }
}