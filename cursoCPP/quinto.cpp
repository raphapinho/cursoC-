#include <iostream>

using namespace std;

int main(){
    float nota1 , nota2;

    cout << "informe a nota 1:\n";
    cin >> nota1;

    cout << "informe a nota 2:\n";
    cin >> nota2;

    float media = (nota1 + nota2)/2;

    cout << "media: " << media << endl;

    if (media >= 5) {
        cout << "aluno aprovado\n";
    } else {
        cout << "aluno reprovado\n";
    }

    

    // operadores logicos : E: &&, OU: || NAO: !

    float freq;
    cout << "qual e a frequencia do aluno: \n";
    cin >> freq;

    if (media >=5 && freq >= 75){
        cout << "aluno aprovado\n";
        } else {
            cout << "aluno reprovado\n";
        }
    return 0;

    //operador ternario
    (media >= 5) ? cout << "provado" : cout << "reprovado";
}