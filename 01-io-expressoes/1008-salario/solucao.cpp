#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int cracha, horas_trabalhadas;
    double valor_hora;

    cin >> cracha >> horas_trabalhadas >> valor_hora;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << cracha << endl;
    cout << "SALARY = U$ " << horas_trabalhadas * valor_hora << endl;
}