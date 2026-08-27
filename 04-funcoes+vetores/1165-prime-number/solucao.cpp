#include <iostream>
using namespace std;

bool ehPrimo(int n);


int main(){

    int N, X, divisores;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> X;

        if(ehPrimo(X)){
            cout << X << " eh primo" << endl;
        }
        else{
            cout << X << " nao eh primo" << endl;
        }
    }
}

bool ehPrimo(int n){
    
    int divisores=0;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            divisores++;
        }
    }

    return divisores==2;
}