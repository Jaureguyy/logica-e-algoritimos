    #include <iostream>
    using namespace std;

    int main(){

        int hI, hF, tempo;

        cin >> hI >> hF;

        if(hI<hF){
            tempo = hF-hI;
        }
        else if(hI>hF){
            tempo = (24-hI)+hF;
        }
        else if(hI==hF){
            tempo = 24;
        }

        cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
    }