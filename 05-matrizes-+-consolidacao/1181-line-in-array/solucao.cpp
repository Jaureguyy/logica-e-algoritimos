#include <iostream>
using namespace std;

void preencherMatriz(double matriz[12][12]);
double somaLinha(double matriz[12][12], int linha);

int main(){

    double linha, m[12][12];
    char operacao;

    preencherMatriz(m);

    cin >> linha >> operacao;

    if(operacao=='S'){
        cout << somaLinha(m, linha) << endl;
    }
    else if(operacao=='M'){
        cout << somaLinha(m, linha);
    }
    
}



void preencherMatriz(double matriz[][12]){
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> matriz[i][j];
        }
    }
}

double somaLinha(double matriz[][12], int linha){
    double soma=0;
    for(int j=0;j<12;j++){
        soma+=matriz[linha][j];
    }

    return soma;
}