    #include <iostream>
    using namespace std;

    int main(){

        int N, menor;

        cin >> N;
        int X[N];

        for(int i=0; i<N; i++){
            cin >> X[i];
            if(i==0){
                menor=i;
            }
            else if(X[i]<X[menor]){
                menor=i;
            }
        }

        cout << "Menor valor: " << X[menor] << endl;
        cout << "Posicao: " << menor << endl;
    }