#include <iostream>
#include <iomanip>
using namespace std;

void preencherMatriz(double m[][12]){
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> m[i][j];
        }
    }
}
double somaMatriz(double m[][12]){
    double soma=0;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            if(i>j && i+j>11){
                soma+=m[i][j];
            }
        }
    }
    return soma;
}

int main(){
    double matriz[12][12];
    char operacao;

    cin >> operacao;
    preencherMatriz(matriz);

    cout << fixed << setprecision(1);
    if(operacao=='S'){
        cout << somaMatriz(matriz) << endl;
    }
    else if(operacao=='M'){
        cout << somaMatriz(matriz)/30 << endl;
    }
}