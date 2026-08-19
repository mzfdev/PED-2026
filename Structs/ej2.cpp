//Structs Anidados
// Almacenar en Structs los siguientes datos
/*
    Persona:
        - name
        - age
        - address 

    Address:
        - street
        - city
*/

#include <iostream>
using namespace std;

struct Direccion{
    string calle;
    string ciudad;
};

struct Persona{
    string nombre; 
    int edad; 
    Direccion direccion;
};

//direccion -> Direccion -> Struct {}

int main(){
    /*
    Persona pers1;
    pers1.nombre = "Miguel";
    pers1.edad = 30;
    */
    Persona p = {"Miguel", 30, {"Av. No se","San Salvador"}};

    cout<<p.nombre<<endl;
    cout<<p.edad<<endl;
    cout<<p.direccion.calle<<endl;
    cout<<p.direccion.ciudad<<endl;

    return 0;
}