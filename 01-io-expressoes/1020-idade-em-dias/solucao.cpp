#include <iostream>
using namespace std;

int main()
{

    int tempo, anos, meses, dias;

    cin >> tempo;

    anos = tempo / 365;
    meses = (tempo % 365) / 30;
    dias = (tempo % 365) % 30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
}