/*JOGO DA FORCA*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
   
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i=0; i<30; i++){
        secreta[i] = '_';
    }
    
    while ((chances>0) && (acertos<tam))
    {
        cout << "Chances - " << chances << "\n";
        cout << "Palavra secreta - " << secreta << "\n"; 

        for(i=0;i<tam;i++){
            cout << secreta[i];
        }

        cout << "\n\nDigite um letra: ";
        cin >> letra[0];

        for(i=0; i<tam; i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        
        acerto=false;
        system("cls");
    }

    if(acertos == tam){
        cout << "Você venceu!";
    }else{
        cout << "Perdeu!";
    }

    system("pause");
    return 0;
}