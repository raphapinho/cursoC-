#include <iostream>

using namespace std;

int main(){
    int inteiro;
    inteiro = 5.5;
    cout << inteiro << endl;

    float real;
    real = 5.3;
    cout << real << endl;

    double real2;
    real2 = 5.3e307;
    cout << real2 << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "qual sua idade" << endl;
    cin >> idade;
    cout << "idade " << idade << endl;

    return 0;
}