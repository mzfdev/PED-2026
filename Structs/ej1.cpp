//Retroalimentacion de Structs

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main(){
    Persona pers1;
    pers1.nombre = "Miguel";
    pers1.edad = 30;

    Persona pers2;
    pers2.nombre = "Jose";
    pers2.edad = 24;

    cout<<"Nombre: "<<pers1.nombre<<endl;
    cout<<"Nombre: "<<pers2.nombre<<endl;

    return 0;
}