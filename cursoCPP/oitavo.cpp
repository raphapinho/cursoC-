#include <iostream>

using namespace std;

int main(){

    //int vet[4];
    //vet[0] = 5;
    //vet[1] = 10;
   // int vet[4] = {5,10};

    //cout << vet[0] << endl;

    //for(int i=0; i<4; i++){
    //    cout << vet[i] << " "; //printar elementos
    //}

    //cout << endl;

    //int x = sizeof(vet); //quantidade de bytes
    //int y = sizeof(vet)/sizeof(int);// quantidade de elementos

    //cout << "tamanho do inteiro: " << x << endl;
    //cout << "quantidade de elementos: "<<y << endl;

    //Alocação dinamica
    int tamanho;
    cout << "digite o tamanho do vetor!" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    
    for(int i = 0; i < tamanho ; i++){
        cout << "digite o elemento " << i << "do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i=0 ; i < tamanho ; i++){
        cout << vetor[i] << " ";
    }    
    cout << endl;

    delete [] vetor; //deleta o vetor

    return 0;
}