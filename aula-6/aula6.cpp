/*ESCOPO DE VARIAVEIS E OPERADORES MATEMÁTICOS*/

#include <iostream>
#define pi 3.1415; // CONSTANTE

using namespace std;

int n1, n2; // Variaveis globais

int main(){
    
    int n3, n4; // Variaveis locais
    int res;

    // Operadores Matemaáticos: + - / * % ()

    n1 = 8;
    n2 = 45;
    n3 = 10;
    n4 = 2;

    res = (n2-n4)*12+n1+n3;

    cout << "Resulatado da conta:" << res << "\n";
    
    cout << "Operação com PI:" << endl << "resto:" << res / pi;


}
