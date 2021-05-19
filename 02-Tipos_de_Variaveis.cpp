#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    cout<<"O que são Variaveis ?";
    /* São posições que o sistema operacional reservar na memoria tendo um 
    Nome, Tipo e Valor, podendo acessar, editar e deletar esse valor da variavel */

    int valorUnitario = 10; // Valores inteiros.
    
    float valorGrama = 3.5; // Valores Decimais de precisão Simples.
    
    double salario = 2500.50; // Valores Decimais de precisão Dupla.
    
    string nome = "Alexandre"; // Cadeia de Caracteres.
    
    char letra = 'A'; // Caracter.

    bool palmeirasNaoTemMundial = true; // Lógica.

    return 0;
}
