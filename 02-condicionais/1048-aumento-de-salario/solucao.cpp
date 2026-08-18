#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double salario, reajuste, percentual;

    cin >> salario;

    if(salario>0 && salario <=400){
        percentual=0.15;
    }
    else if(salario>400 && salario<=800){
        percentual=0.12;
    }
    else if(salario>800 && salario<=1200){
        percentual=0.1;
    }
    else if(salario>1200 && salario<=2000){
        percentual=0.07;
    }
    else if(salario>2000){
        percentual=0.04;
    }

    reajuste=salario*percentual;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salario+reajuste << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << int(percentual*100) << " %" << endl;
}