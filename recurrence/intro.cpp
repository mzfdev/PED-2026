//RECURSIVIDAD

#include <iostream>
#include <algorithm>

using namespace std;

//Iterativo
int contarHastaN(int n){
    for(int i = 0; i<n; i++){
        cout<<i<<endl;
    }
}

//RECURSIVO
void contarHastaNRecursivo(int n){
    //Encontrar caso base
    if(n == 0) return;

    //Encontrar caso y condicion recursiva
    contarHastaNRecursivo(n - 1);
    cout<<n;
}

int main() {
    int n = 5;

    return 0;
}