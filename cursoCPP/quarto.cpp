#include <iostream>

using namespace std;


#define pi 3.14; //essa variavel não muda nunca;

#define curtir cout << "curti\n";

int t = 3;

void inscrever(){
    cout << "se increva";
}

int somar(int x, int y){
    int t = 1;
    int soma;
    soma = x + y;
    x = 30;
    return soma;

}

int main(){
    int t = 0;
    
    inscrever();

    int a = 5, b = 4;
    int s;
    s = somar(a,b);

    cout << "valor de a: " << a << endl;

    cout << "soma: " << s << endl;

    cout << "valo de t : " << t << endl;
    
    cout << pi;

    curtir;

    return 0;
}