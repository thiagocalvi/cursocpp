/*OPERADOR TERNARIO OU IF TERNARIO*/

#include <iostream>

using namespace std;

int main(){

    int n1, n2, nota;
    string res;

    cout << "DIGITE A PRIMEIRA NOTA";
    cin >> n1;

    cout << "DIGITE A SEGUNDA NOTA";
    cin >> n2;

    nota = n1 + n2;

    //nota >= 60? res = "APROVADO" : res = "REPROVADO";

    res = nota >= 60? "APROVADO" : "REPROVADO";

    cout << "\nSITUAÇÃO DO ALUNO: "<< res << endl;

    return 0;
}