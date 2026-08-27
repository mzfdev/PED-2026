#include<iostream>

using namespace std;

int main(){ 

    //X es una variable que contiene un 10
    int x = 10;

    /*
    p es un variable(puntero) que contiene
    la ubicacion de la variable que contiene el 10
    */
    int* p = &x;
    /*
    pp es un variable(puntero) que contiene una
    variable que contiene
    la ubicacion de la variable que contiene el 10
    */
    int** pp = &p;

    int*** ppp = &pp;

    return 0;
}