#include <iostream>
using namespace std;

int main(){

    int diaI, hrI, minI, segI, diaF, hrF, minF, segF, tempoI, tempoF, total;
    string lixo;
    char dois_pontos;

    cin >> lixo >> diaI >> hrI >> dois_pontos >> minI >> dois_pontos >> segI;
    cin >> lixo >> diaF >> hrF >> dois_pontos >> minF >> dois_pontos >> segF;

    tempoI = diaI*24*60*60+(hrI*60*60)+minI*60+segI;
    tempoF = diaF*24*60*60+(hrF*60*60)+minF*60+segF;
    total  = tempoF - tempoI;
    

    cout << total/60/60/24 << " dia(s)" << endl;
    cout << total/60/60%24 << " hora(s)" << endl;
    cout << total/60%60 << " minuto(s)" << endl;
    cout << total%60 << " segundo(s)" << endl;
}