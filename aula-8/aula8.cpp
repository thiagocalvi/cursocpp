// INVERTENDO VALORES DE VARIAVEI

#include <iostream>
using namespace std;

int main(){

    int num =10;

/*PRIMEIRA FORMA DE INVERÇÃO*/
    num = num * -1;
    cout << num << endl;

    num = 10;

/*SEGUNDA FORMA DE INVERÇÃO*/
    num =- 10;
    cout << num << endl;

/*ESSA FORMA NÃO SALVA O VALOR INVERTIDO*/

    num = 10;
    cout << -num << endl;

    return 0;
}