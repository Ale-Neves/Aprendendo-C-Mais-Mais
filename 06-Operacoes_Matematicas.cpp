#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  system("cls");

  /*Operadores matemáticos:
    Adição:                   +,
    Subtração:                -,
    Multiplicação:            *,
    Divisão:                  /,
    Resto Divisão (Mod):      %.
  */

  // 10*2+3 => 20 + 3 = 23;
  // 3+10*2 => 3 + 20 = 23;

  /* E como funciona a precedencia desses operadores?
      R: A precedência de operadores determina a ordem em que os operadores serão processados.
      Operadores com maior precedência são processados primeiro,
      como o operador de multiplicação e Divisão, eles tem maior precedência que o operador de adição e subtração.
      e por isso será executado primeiro.
  */

  int x = 10, y = 5;

  // Operador de Adição.
  cout << "\n -> A soma dos valores " << x << " + " << y << " = " << x + y;

  // Operador de Subtração.
  cout << "\n -> A subtracao dos valores " << x << " - " << y << " = " << x - y;

  // Operador de Multiplicação.
  cout << "\n -> A multiplicacao dos valores " << x << " * " << y << " = " << x * y;

  // Operador de Divisão.
  cout << "\n -> A divisao dos valores " << x << " / " << y << " = " << x / y;

  // Operador de Resto de Divisão (MOD).
  cout << "\n -> O resto da divisao dos valores " << x << " / " << y << " = " << x % y;

  cout << "\n\n";
  return 0;
}
