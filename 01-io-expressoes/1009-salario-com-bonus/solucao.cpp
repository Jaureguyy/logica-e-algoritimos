#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string nome;
    double salario, vendas;

    cin >> nome >> salario >> vendas;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salario + 0.15 * vendas << endl;
}