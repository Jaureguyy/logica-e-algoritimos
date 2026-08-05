#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double raio, pi;
    pi = 3.14159;

    cin >> raio;

    cout << fixed << setprecision(4);
    cout << "A=" << pi * pow(raio, 2) << endl;
}