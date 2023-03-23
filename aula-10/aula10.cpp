/*PT-2 ESTRUTURAS DE DECISÃO IF ELSE E COMANDO GOTO*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    inicio:
    system("cls");
    
    cout << "INFORME O VALOR DA NOTA 1: \n";
    cin >> n1;

    
    cout << "INFORME O VALOR DA NOTA 2: \n";
    cin >> n2;

    res = n1 + n2;

    if(res >= 60){
        cout << "APROVADO";
    }else if(res >= 40){
        cout << "RECUPERAÇÃO";
    }else{
        cout << "REPROVADO";
    }

    cout << "DIGITAR OUTRAS NOTAS? [s/n]: ";
    cin >> opc;

    if(opc == 's' || opc == 'S'){
        goto inicio;
    }

    
    return 0;
}