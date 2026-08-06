#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    double raio, pi = 3.14159, volume;

    cin >> raio;
    volume = (4 / 3.0) * pi * pow(raio, 3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
}