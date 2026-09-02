#include <iostream>
#include <iomanip> ///para utilizar o set()
using namespace std;

int main(){

    int N;

    cin >> N;

    while(N){

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(j==N-1){
                    cout << setw(3) << min(min(i,j),min(N-1-i,N-1-j))+1 << endl; ///para cada "celula" ele irá verificar em qual 
                }                                                                ///camada a unidade se encontra
                else{                                                            ///caso seja a celula da ultima coluna, da um 
                cout << setw(3) << min(min(i,j),min(N-1-i,N-1-j))+1 << " ";      ///endl
                }
            }
        }
        cout << endl;
        cin >> N;
    }
}