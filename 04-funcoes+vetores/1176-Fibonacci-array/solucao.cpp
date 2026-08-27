#include <iostream>
using namespace std;

int main(){

    int T, N;

    cin >> T;

    for(int i=1; i<=T; i++){
        cin >> N;

        long long vet[N+1];
        vet[0]=0;
        
        if(N==0){
            cout << "Fib(0) = " << vet[0] << endl;
        }
        else if(N>=1){                                               /// 0(0) 1(1) 1(2) 2(3) 3(4) 5(5) 8(6) 13(7) 21(8)
        vet[1]=1;

        for(int i=2;i<=N;i++){
            vet[i] = vet[i-1]+vet[i-2];
        }
        cout << "Fib(" << N << ") = " << vet[N] << endl;
        }
    }
}

/*
primeiro eu defino vet[0] como caso geral, após isso
faço uma condicional em que se N==0 (já sei o resultado), mostrará
o valor.

A segunda condição estabelece que se N>=1 (neste caso terá 2 valores), ele acrescenta 
o vet[1]=1 e caso seja maior faz o cálculo para os números posteriores
*/