#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int A, B, C, maiorAB;

    cin >> A >> B >> C;

    maiorAB = (A + B + abs(A - B)) / 2;

    cout << (maiorAB + C + abs(maiorAB - C)) / 2 << " eh o maior" << endl;
}