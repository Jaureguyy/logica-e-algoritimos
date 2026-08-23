#include <iostream>
using namespace std;

int main(){

    int N, X, divisores;

    cin >> N;

    for(int i=0; i<N; i++){
        divisores=0;
        cin >> X;
        for(int i=1; i<=X; i++){
            if(X%i==0){
                divisores++;
            }
        }
        if(divisores==2){
            cout << X << " eh primo" << endl;
        }
        else{
            cout << X << " nao eh primo" << endl;
        }
    }
}