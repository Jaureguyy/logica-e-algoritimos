#include <iostream>
using namespace std;

int main(){

    int a, b, c, auxiliar, a2, b2, c2;

    cin >> a >> b >> c;
    auxiliar = 0;                      //sera usado posteriormente

    a2=a;
    b2=b;
    c2=c;

    if(a>b && b>c){
        cout << c << endl << b << endl << a << endl;
    }
    else if(b>a && a>c){
        cout << c << endl << a << endl << b << endl;
    }
    else if(c>a && a>b){
        cout << b << endl << a << endl << c << endl;
    }
    else if(a>c && c>b){
        cout << b << endl << c << endl << a << endl;
    }
    else if(b>c && c>a){
        cout << a << endl << c << endl << b << endl;
    }
    else if(c>b && b>a){
        cout << a << endl << b << endl << c << endl;
    }

    cout << endl;

    cout << a2 << endl << b2 << endl << c2 << endl;
}