#include <iostream>

using namespace std;

int main(){
    int i = 1;
    int n = 20;

    while(i <=20){
        cout << i << endl;
        i++;

    }

    do{
        cout << i << endl;
        i++;
    } while(i <= 20);

    for(int j=1; j <= n; j++){
        cout << j << endl;
    }

    return 0;
}