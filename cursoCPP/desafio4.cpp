#include <iostream>

using namespace std;

int potencia(int base, int exp ){
    int result = base;
    for(int i = 0; i < exp-1; i++){
        result = result * base;
    }
    return result;
}

int main(){
    int base, exp;
    cout << "coloque a base: \n";
    cin >> base;

    cout << "coloque a expoente: \n";
    cin >> exp;

    cout << "resultado: " << potencia(base, exp);

    return 0;
}