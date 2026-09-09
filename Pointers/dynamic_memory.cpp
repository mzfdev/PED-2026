#include<iostream>

int main(){
    int n;

    do{
        std::cout<<"Ingrese la cantidad de elementos "<<std::endl;
        std::cin>>n;

        int* vector = new int[n];
        //Array : No puedo modificar su tamaño
        //Vector : SI puedo modificar su tamaño

        for(int i = 0; i<n; i++){
            std::cout<<"Ingrese el elemento: "<<std::endl;
            std::cin>>vector[i];
        }

        std::cout<<"Los elementos son:"<<std::endl;

        for(int i = 0; i<n; i++){
            std::cout<<vector[i]<<std::endl;
        }

        std::cout<<std::endl;

        //Libero la memoria no utilizada
        delete[] vector;

    }while(n != 0);

    return 0;
}
