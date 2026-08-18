#include<iostream>
#include<math.h>

using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);

int main(){
    /*
    //Funciones Internas
    int a = 5;
    cout<<sizeof(a);

    //Funciones de biblioteca
    cout<<sqrt(25);
    cout<<pow(2,3);
    cout<<round(2.5); // 3

    cout<<ceil(2.1); //3
    cout<<floor(2.9); //2
    */

    // ESTO YA NO!!!!
    int b = 10;
    int c = 20;
    int a = 4;
    int resultado = sum(b,c); //30
    int suma2 = resultado + 1 // 30 + 1 = 31
    cout<<"El resultado de la suma es: "<<resultado<<endl;

    return 0;
}


//Funcion con retorno
int sum(int a, int b){
    return a + b; //30
}

int sum(int a, int b, int c){
    return a + b + c; //30
}

//Funcion sin retorno
void sumVoid(int a, int b){
    cout<<a + b; //30
    int suma2 = a + b + 1; // 30 + 1 = 31
}