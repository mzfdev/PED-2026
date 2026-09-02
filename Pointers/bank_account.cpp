#include <iostream>

void depositar(double* saldo, double cantidad){
    *saldo += cantidad;

    //Si quiero usar la direccion: saldo
    //Si quiero usar el valor que proviene en esa direccion: *saldo
}

int main(){
    double saldo = 1000;
    double cantidad = 200;

    std::cout<<"Saldo Antes: "<<saldo<<std::endl;
    depositar(&saldo, cantidad);
    std::cout<<"Saldo Despues: "<<saldo<<std::endl;
    return 0;
}