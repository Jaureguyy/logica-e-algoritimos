#include <iostream>
using namespace std;

int main(){

    double valor, positivos=0, numerador=0, denominador=0;

    for(int i=0;i<6;i++){
        cin >> valor;
        
        if(valor>0){
            numerador+=valor;
            denominador++;
            positivos++;
        }
    }

    cout << positivos << " valores positivos" << endl;
    cout << numerador/denominador << endl;
}