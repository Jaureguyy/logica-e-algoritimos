#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int cod1, quantidade1, cod2, quantidade2;
    double valor1, valor2;

    cin >> cod1 >> quantidade1 >> valor1 >> cod2 >> quantidade2 >> valor2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << quantidade1 * valor1 + quantidade2 * valor2 << endl;
}