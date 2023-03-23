//switch case

#include <iostream>
#include <stiusd.h>
using namespace std;

int main(){

    int val;

    cout << "SELECIONE UM TRANSPORTE" << endl;
    cout << "[1] - carro, [2] - moto, [3] - avião, [4] - helicoptero" << endl;

    cin >> val;

    // switch(val){
    //     case 1:
    //         cout << "Cor selecionada verde";
    //         break;
        
    //     case 2:
    //         cout << "Cor selecionada azul";
    //         break;
        
    //     case 3:
    //         cout << "Cor selecionada vermelho";
    //         break;

    //     default:
    //         cout << "Valor invalido";

    // }


    // switch(val){
    //     case 1:
    //     case 2:
    //         cout << "Cor selecionada verde";
    //         break;
        
    //     case 3:
    //     case 4:
    //         cout << "Cor selecionada vermelho";
    //         break;

    //     default:
    //         cout << "Valor invalido";

    // }

    //switch aninhados
    switch(val){
        case 1:
        case 2:
            cout << "Trasnporte terrestre";
            switch (val){
            case 1:
                cout << "Carro selecionado";
                break;
            case 2: 
                cout << "Moto selecionado";
                break;
            }

        case 3:
        case 4:
            cout << "Transporte aereo";
            switch(val){
                case 3:
                    cout << "Avião";
                    break;
                case 4:
                    cout << "Helicopterro";
                    break;
            }
        default:
            cout << "Entrada invalida";
    } 

    return 0;
}