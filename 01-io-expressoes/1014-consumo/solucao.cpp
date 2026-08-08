#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int distancia;
    double combustivel_gasto;

    cin >> distancia >> combustivel_gasto;

    cout << fixed << setprecision(3);
    cout << distancia / combustivel_gasto << " km/l" << endl;
}