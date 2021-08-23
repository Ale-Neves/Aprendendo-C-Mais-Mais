#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    //Declaração Variaveis Individuais.
    int qtLaranja = 0;
    int qtBeterraba = 0;
    int qtMelao = 0;

    //Declaração Variaveis Multiplas.
    int qtPera = 1, qtMamao=2, qtBanana=3, qtAbacate=4;

    cout<<"\n|------------ Individuais -------------|";
    cout<<"\n-> Quantidade de Laranja :"<< qtLaranja;
    cout<<"\n-> Quantidade de Beterraba :"<< qtBeterraba;
    cout<<"\n-> Quantidade de Melao :"<< qtMelao;

    cout<<"\n\n|------------ Multiplas -------------|";
    cout<<"\n-> Quantidade de Pera: "<< qtPera;
    cout<<"\n-> Quantidade de Mamao: "<< qtMamao;
    cout<<"\n-> Quantidade de Banana: "<< qtBanana;
    cout<<"\n-> Quantidade de Abacate: "<< qtAbacate;
    
    cout<<"\n\n";
    return 0;
}
