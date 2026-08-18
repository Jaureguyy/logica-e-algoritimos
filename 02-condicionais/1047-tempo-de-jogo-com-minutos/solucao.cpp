#include <iostream>
using namespace std;

int main(){

    int hI, mI, hF, mF, minutosI, minutosF, tempo;

    cin >> hI >> mI >> hF >> mF;

    minutosI = hI*60 + mI;
    minutosF = hF*60 + mF;

    ///mesma logica que a 1046, se os minutos iniciais forem menores, significa que começou antes,
   ///se for maior provavelmente eh uma hora maior

   if(minutosI<minutosF){
    tempo = minutosF - minutosI;
   }
   else if(minutosI>minutosF){
    tempo = (24*60-minutosI) + minutosF;
   }
   else{
    tempo = 24*60;
   }

   cout << "O JOGO DUROU " << tempo/60 << " HORA(S) E " << tempo%60 << " MINUTO(S)" << endl;
}

    