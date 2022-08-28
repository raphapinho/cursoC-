#include <iostream>

using namespace std;

int main(){

    float nota1, nota2 ,nota3;
    cout << "coloque a nota1: \n";
    cin >> nota1;

    cout << "coloque a nota2: \n";
    cin >> nota2;

    cout << "coloque a nota3: \n";
    cin >> nota3;

    float media = (nota1 + nota2 + nota3) / 3;

    float mediGeral = 7;

    if (media < mediGeral){
        cout << "aluno abaixo da media\n";
    } else if (media == mediGeral){
        cout << "aluno na media\n";
    } else if (media > mediGeral){
        cout << "aluno acima da media\n";
    } else{
        cout << "coloque um valor valido";
    }

    return 0;
}