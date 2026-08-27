#include <iostream>
using namespace std;

int main(){

    int N[20], auxiliar;

    for(int i=0; i<20; i++){
        cin >> N[i];
    }
    for(int i=0; i<10; i++){
        auxiliar=N[19-i];
        N[19-i]=N[i];
        N[i]=auxiliar;
    }
    for(int i=0; i<20; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    //   1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    //   20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
}