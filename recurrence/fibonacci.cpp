#include<iostream>

int fibonacci(int n){
    //Caso base: si es 0 retorna 0, si es 1 retorna 1
    //if (n <= 1) return n;
    if(n == 0){
        return 0;
    }
    if(n == 1 ){
        return 1;
    }

    //Caso recursivos:
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 3;
    std::cout<<fibonacci(n);
}