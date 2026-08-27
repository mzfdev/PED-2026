#include<iostream>

using namespace std;

int main(){ 

    //Todo Array es un puntero que apunta al primer elemento

    int numeros[3] = {1,2,3};
    int* p = numeros;

    for(int i = 0; i < 3; i++){
        cout<<"Elemento: "<<*(p+i)<<endl;
    }

    return 0;
}