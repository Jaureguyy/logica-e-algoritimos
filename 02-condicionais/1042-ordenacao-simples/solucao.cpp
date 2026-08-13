#include <iostream>
using namespace std;

int main(){
    
    int a, b, c, x, y, z, auxiliar;

    cin >> a >> b >> c;
    x=a;
    y=b;
    z=c;

    if(x<y){
        auxiliar=x;
        x=y;
        y=auxiliar;
    }
    if(y<z){
        auxiliar=y;
        y=z;
        z=auxiliar;
    }
    if(x<y){
        auxiliar=x;
        x=y;
        y=auxiliar;
    }

    cout << z << endl << y << endl << x << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;
}