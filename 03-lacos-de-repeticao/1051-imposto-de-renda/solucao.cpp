#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double salario, imposto;

    cin >> salario;
    imposto = 0;

    if(salario<=2000){
        cout << "Isento" << endl;
        return 0;
    }
    if(salario>2000){
        imposto += min(salario-2000,1000.0)*0.08;
    }
    if(salario>3000){
        imposto += min(salario-3000,1500.0)*0.18;
    }
    if(salario>4500){
        imposto += (salario-4500)*0.28;
    }

    cout << fixed << setprecision(2);
    cout << "R$ " << imposto << endl;
}