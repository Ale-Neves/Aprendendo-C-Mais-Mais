#include <iostream> // <- Biblioteca de entra e saida
#include <string>		// Necessário para usar strings

using namespace std; /* Este comando serve para definir um "espaço de nomes", ou namespace.
Ira trazer a biblioteca para o main, então não sera 
necessario utilizar o std em cada linha de código */

// Função Main principal do programa.
int main(int argc, char const *argv[])
{
    system("cls"); // <- Limpar o termina.

    //Declaração das Variaveis.
    int idade= 0;
    char nome[20] = "";
    char nacionalidade[15] = "";
    string endereco = "";
    //---------------------------

   // cout << "Imprima";  É um objeto de saida, então imprimira conteudo no terminal.
   // cin >> Digite;      É um objeto de entrada, então digitara algo no terminal.
   
    cout << "Informe seu Nome: "; 
    cin >> nome;
    cout << "Informe sua Idade: ";
    cin >> idade;
    cout<<"Informe sua Nacionalidade: ";
    cin>>nacionalidade;
    fflush(stdin); //limpar o buffer após a entrada de dados.
    cout << "Informe seu Endereco: ";
    getline( cin, endereco);

    //Imprimindo no terminal.
    cout<<"\n\n/------- Imprimindo Dados Informados --------/";
    cout<<"\n-> Nome: "<< nome << ".";
    cout<<"\n-> Idade: "<< idade << " anos.";
    cout<<"\n-> Nacionalidade: "<< nacionalidade << ".";
    cout<<"\n-> Endereco: "<< endereco << ".\n\n";


    return 0;
}
