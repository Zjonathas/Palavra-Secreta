#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    char palavra[30], secreta[30], letra[1];
    int tamanho, i, chances, acertos;
    bool acerto;

    tamanho = 0;
    i = 0;
    chances = 6;
    acertos = 0;
    acerto = false;

    cout << "Fale para seu amigo fechar os olhos e digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    while(palavra[i]!= '\0')
    {
        tamanho++;
        i++;
    }

    for (i = 0; i < 30; i++)
    {
        secreta[i] = '-';
    }

    while ((chances > 0) && (acertos < tamanho))
    {
        cout << "Chances restantes: " << chances;
        cout << "\nPalavra secreta: ";

        for (i = 0; i < tamanho; i++)
        {
            cout << secreta[i];
        }

        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];

        for (i = 0; i < tamanho; i++)
        {
            if(palavra[i]==letra[0])
            {
                acerto = true;
                acertos++;
                secreta[i] = palavra[i];
            }
        }
        if(!acerto)
        {
            chances--;
        }
        acerto=false;
        system("cls");
    }

    if(acertos == tamanho)
    {
        cout << "Voce venceu.\n\n";
    }
    else
    {
        cout << "Voce perdeu.\n\n";
    }
    
    system("pause");


    return 0;
}