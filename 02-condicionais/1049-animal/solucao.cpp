#include <iostream>
using namespace std;

int main(){

    string vertebras, animal, alimentacao;

    cin >> vertebras >> animal >> alimentacao;

    if(vertebras=="vertebrado"){
        if(animal=="ave"){
            if(alimentacao=="carnivoro"){
                cout << "aguia" << endl;
            }
            else if(alimentacao=="onivoro"){
                cout << "pomba" << endl;
            }
        }
        else if(animal=="mamifero"){
            if(alimentacao=="onivoro"){
                cout << "homem" << endl;
            }
            else if(alimentacao=="herbivoro"){
                cout << "vaca" << endl;
            }
        }
    }
    else if(vertebras=="invertebrado"){
        if(animal=="inseto"){
            if(alimentacao=="hematofago"){
                cout << "pulga" << endl;
            }
            else if(alimentacao=="herbivoro"){
                cout << "lagarta" << endl;
            }
        }
        else if(animal=="anelideo"){
            if(alimentacao=="hematofago"){
                cout << "sanguessuga" << endl;
            }
            else if(alimentacao=="onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }
}