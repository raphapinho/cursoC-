#include <iostream>

using namespace std;

int fatorial(int a){
    int fat = 1;
    for(int b=1; b <= a; b++){
        fat = fat * b;
    }
    return fat;
}

int main(){
    int c = 5;
    int res = fatorial(c);
    cout << "resultado: " << res << endl;
    return 0;
}