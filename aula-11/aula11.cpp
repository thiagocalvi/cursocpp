/*OPERADORES LOGICOS AND, OR, NOT
    AND >> &&
    OR  >> ||
    NOT >> !
*/

#include <iostream>

using namespace std;

int main(){

    int num = 1;

    /* OPERADOR AND > &&*/
    // if(num > 4 && num < 7){
    //     cout << "Aceito";
    // }else{
    //     cout << "Não aceito";
    // }


    /*OPERADOR OR > ||*/
    // if(num < 3 || num > 8){
    //     cout << "Aceito";
    // }else{
    //     cout << "Não aceito";
    // }    

    // if((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20) ){
    //     cout << "VALOR ACEITO";
    // }else{
    //     cout << "VALOR NÃO ACEITO";
    // }

    /*OPERADOR NOT > !*/
    // 1 = TRUE
    // 0 = FALSE
    
    if(!num){
        cout << "VOU AO CLUBE"; 
    }else{
        cout << "VOU AO CINEMA";
    }



    return 0;
}