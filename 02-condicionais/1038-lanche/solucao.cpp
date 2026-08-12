#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int cod, qntd;
    double valor;

    cin >> cod >> qntd;

    if (cod == 1)
    {
        valor = 4.00;
    }
    else if (cod == 2)
    {
        valor = 4.50;
    }
    else if (cod == 3)
    {
        valor = 5.00;
    }
    else if (cod == 4)
    {
        valor = 2.00;
    }
    else if (cod == 5)
    {
        valor = 1.50;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << double(qntd * valor) << endl;
}