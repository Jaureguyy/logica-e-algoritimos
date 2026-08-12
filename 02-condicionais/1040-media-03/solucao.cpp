#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double n1, n2, n3, n4, media, nE, media_final;

    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (media >= 5 && media < 7)
    {
        cout << "Aluno em exame." << endl;

        cin >> nE;
        media_final = (media + nE) / 2;

        cout << "Nota do exame: " << nE << endl;

        if (media_final >= 5)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << media_final << endl;
    }
}