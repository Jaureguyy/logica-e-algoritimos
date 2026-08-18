#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double A, B, C, perimetro, area;

    cin >> A >> B >> C;
    perimetro = A+B+C;
    area = ((A+B)*C) / 2;


    cout << fixed << setprecision(1);
    if(A+B>C && abs(A-B)<C){
        cout << "Perimetro = " << perimetro << endl;
    }
    else if(B+C>A && abs(B-C)<A){
        cout << "Perimetro = " << perimetro << endl;
    }
    else if(C+A>B && abs(A-C)<B){
        cout << "Perimetro = " << perimetro << endl;
    }
    else{
        cout <<"Area = " << area << endl;
    }
}