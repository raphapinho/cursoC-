#include <iostream>

using namespace std;

int main(){
    int idade, renda;

    cout << "qual a sua idade: \n";
    cin >> idade;

    cout << "qual a sua renda: \n";
    cin >> renda;

    if(idade > 21 && renda < 1200){
        cout << "voce esta apto a participar";
    } else {
        cout << "você nao esta apto a participar";
    }


    return 0;
}