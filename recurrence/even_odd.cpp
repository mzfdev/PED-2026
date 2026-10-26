//RECURSIVIDAD INDIRECTA
#include <iostream>

using namespace std;

//Prototipos
//Verificar si es par
bool isEven(int number);
//Verificar si es impar
bool isOdd(int number);

int main() {
    int number = 5;

    if(isEven(number)){
        cout<<"El numero es par"<<endl;
    }else{
        cout<<"El numero no es par"<<endl;
    }

    return 0;
}

// 5 -> 4,3,2,1,0
bool isEven(int number){
    //mi numero es cero
    if(number == 0){
        return true;
    }

    return isOdd(number-1);
}

bool isOdd(int number){
    //mi numero es cero
    if(number == 0){
        return false;
    }

    return isEven(number-1);
}