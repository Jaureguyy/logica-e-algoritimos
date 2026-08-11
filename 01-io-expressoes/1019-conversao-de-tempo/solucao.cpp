#include <iostream>
using namespace std;

int main()
{

    int tempo, horas, minutos, segundos, resto;

    cin >> tempo;

    // concertando a lógica que eu havia feito anteriormente com a definição de minutos :  minutos = tempo / 60;

    horas = (tempo / 60) / 60;
    minutos = (tempo / 60) % 60; // isto é, o resto da divisão do total de minutos em 60, esta divisão resulta na qntd de horas
    segundos = tempo % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;
}