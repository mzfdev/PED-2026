#include <iostream>

void adjust_price(double* price, int cantidad){
    for(int i = 0; i < cantidad; i++){
        //Aumenta 10% de cada elemento
        *(price + i) *= 1.10;
    }
}

int main(){
    //100, 250, 75, 500, 120
    double price[] = {100, 250, 75, 500, 120};
    int cantidad = 5;

    adjust_price(price, cantidad);

    std::cout<<"Precios actualizados: "<<std::endl;
    for(int i = 0; i < cantidad; i++){
        std::cout<<*(price + i)<<std::endl;
    }

    return 0;
}