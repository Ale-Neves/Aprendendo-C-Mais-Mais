#include <iostream>

using namespace std;

/*A maneira antiga de declarar constantes
é você, incluir a diretiva de pré-processador #define
*/

//definindo [nome da constante] [valor].
#define PI 3.1415
// também podemos definir comandos pelo define.
#define pulaLinha cout<<"\n\n";

int main()
{
    system("cls");
    
    // uma constante inteira que armazena o número 100.
    const int valorQualquer = 100;
    // uma constante real que armazena o valor aproximado da raiz quadrada de dois.
    const double raizdedois = 1.4142;


    cout<<"\n\n|-------------- IMPRIMINDO CONSTANTES -------------|";
    cout<<"\n->01 Constante Valor de PI: "<< PI;
    cout<<"\n->02 Constante Valor Qualquer: "<< valorQualquer;
    cout<<"\n->03 Constante Valor de Raiz Quadrada de dois: "<< raizdedois;

    pulaLinha
    return 0;
}