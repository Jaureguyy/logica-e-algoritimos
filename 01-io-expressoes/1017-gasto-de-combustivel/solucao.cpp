#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int tempo, vm;
    double distancia;

    cin >> tempo >> vm;
    distancia = tempo * vm;

    cout << fixed << setprecision(3);
    cout << distancia / 12 << endl;
}