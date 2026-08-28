#include <iostream>
#include <iomanip>
using namespace std;

double media(double numerador, double denominador);
bool ehPositivo(int valor);

int main(){

    double soma=0, x;    
    int positivos=0;

    for(int i=1; i<=6; i++){
        cin >> x;

        if(ehPositivo(x)){
            positivos++;
            soma+=x;
        }
    }

    cout << fixed << setprecision(1);
    cout << positivos << " valores positivos" << endl;
    cout << media(soma, positivos) << endl;

}

double media(double numerador, double denominador){
    return numerador / denominador;
}

bool ehPositivo(int valor){
    return valor>0;
}