#include <iostream>
using namespace std;

int main(){

    int X;

    cin >> X;

    for(int i=X; i<=X+11; i++){
        if(i%2!=0){
            cout << i << endl;
        }
    }
}