//laço while

#include <iostream>

using namespace std;

int main(){
    
    int count;

    count = 0;
    // while(count++ < 20)
    while(count < 20){
        cout << "Teste - " << count  << "\n";
        if(count == 10){
            break;
        }

        count++;
    }

    cout << "\nRotina finalizada\n";

    return 0;
}