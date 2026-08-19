//Repaso de arrays y matrices
#include <iostream>
using namespace std;

int main(){
    int numeros[3] = {3, 4, 8};

    for(int i = 0; i < 3; i++){
        cout<<numeros[i]<<endl;
    }

    cout<<"Matriz: "<<endl;

    int matriz[3][3] = {{1,3,4},{2,3,5},{4,4,4}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}