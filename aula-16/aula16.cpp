//Loop DO WHILE 

#include <iostream>

using namespace std;

int main(){
    
    int count;
    
    count = 0;
    do{
        cout << "Alguma coisa" << count << "\n";
        count++;

    }while (count < 20);
//O bloco de codigo sera executado pelomenos uma vez independente da condição ser verdadeira o falsa


    cout << "Rotina finalizada\n";
    

    return 0;
}

