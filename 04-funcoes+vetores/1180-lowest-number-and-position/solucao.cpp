#include <iostream>
using namespace std;

int posicaoMenor(int v[],int tamanho);

int main(){

    int N;
    cin >> N;

    int X[N];

    for(int i=0; i<N; i++){
        cin >> X[i];
    }

    cout << "Menor valor: " << X[posicaoMenor(X, N)] << endl;
    cout << "Posicao: " << posicaoMenor(X, N) << endl;


}


int posicaoMenor(int v[], int tamanho){
    int menor;

    for(int i=0; i<tamanho; i++){
        if(i==0){
            menor=0;
        }
        if(v[menor]>v[i]){
            menor=i;
        }
    }

    return menor;
}
