#include<iostream>

using namespace std;

int main(){ 

    int n = 5;

    int *pointer1 = &n;

    cout<<"Valor: "<<n<<endl;
    cout<<"Ubicacion de n: "<<&n<<endl;;
    cout<<"Variable que tiene Ubicacion de n: "<<pointer1<<endl;
    cout<<"Valor de n: "<<*pointer1<<endl;

    *pointer1 = 10;

    cout<<"Nuevo Valor de n: "<<n<<endl;

    return 0;
}