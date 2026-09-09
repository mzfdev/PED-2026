#include<iostream>

void invertir_array(int* arreglo, int cantidad){
    //Lapicero rosado
    int* inicio = arreglo;

    //Lapicero verde
    int* fin = arreglo + cantidad - 1;

    while(inicio < fin){
        int temp = *inicio;
        *inicio = * fin;
        *fin = temp;

        ++inicio;
        --fin;
    }
}

int main(){

    int numeros[] = {10,20,30,40,50};
    int cantidad = 5;

    invertir_array(numeros, cantidad);

    for(int i=0 ; i<cantidad; i++){
        std::cout<<numeros[i]<<std::endl;
    }

    return 0;
}