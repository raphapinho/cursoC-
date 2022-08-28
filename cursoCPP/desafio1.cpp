#include <iostream>
#include <math.h>

using namespace std;

int funcao(int a){
    int result;
    result = pow(a,2) - (3*a) +5;
    return result;
}

int main(){
    int b = 3;

    float resp = funcao(b);

    cout << "resultado: " << resp << endl;

    return 0;
}