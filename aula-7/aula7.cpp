/*ENCREMENTO E DECREMENTO DE VARIAVEIS*/

#include <iostream>
using namespace std;

int main(){

    int n1 = 10;

    /*
    n1 = n1 + 1;    n1++;   n1+=1;
    n1 = n1 - 1;    n1--;   n1-=1;
    n1 = n1 % 1;            n1%=1;
    n1 = n1 / 1;            n1/=1;
    n1 = n1 * 1;            n1*=1;
    */

    /*
    PRÉ E PÓS ENCREMENTO

    ++n1; > PRIMEIRO ENCREMENTO E DEPOIS USA O VALOR
    n1++; > PRIMEIRO USA O VALOR E DEPOPIS O ENCREMENTA

    */

    cout << "VALOR INICIA DE N1:" << n1 << endl;

    cout << "ENCREMENTANDO UMA VARIAVEL\n";
    n1+=1;
    cout << n1 << endl;

    n1 = 10;
    cout << "RESET DE N1: " << n1 << endl;

    cout << "PRÉ ENCREMENTO\n";
    cout << ++n1;

    n1 = 10;
    cout << "RESET DE N1: " << n1 << endl;

    cout << "PÓS ENCREMENTO\n";
    cout << n1++;

    return 0;
}