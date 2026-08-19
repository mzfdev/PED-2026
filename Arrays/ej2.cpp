/*
Ejercicio:

Llenar un array bidimensional con los siguientes datos:

1       2       3       4       5
2       4       6       8       10
3       6       9       12      15
4       8       12      16      20
5       10      15      20      25

*/
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int matriz[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}