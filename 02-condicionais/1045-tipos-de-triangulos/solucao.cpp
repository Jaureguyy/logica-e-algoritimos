#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double A, B, C, auxiliar;

    cin >> A >> B >> C;

    ///primeiramente um simple sort
    if(A<B){
        auxiliar=A;
        A=B;
        B=auxiliar;
    }
    if(B<C){
        auxiliar=B;
        B=C;
        C=auxiliar;
    }
    if(A<B){
        auxiliar=A;
        A=B;
        B=auxiliar;
    }


    ///descobrindo oS tipoS do triangulo
    if(A>=B+C){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(pow(A,2)==pow(B,2)+pow(C,2)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if(A*A > B*B + C*C){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(A*A < B*B + C*C){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }


    if(A==B && B==C){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(A==B || B==C || A==C){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}