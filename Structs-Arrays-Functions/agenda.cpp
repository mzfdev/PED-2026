/*
Crear un programa que permita gestionar una agenda de contactos.
    1) Se debe almacenar en un array simple (con maximo de 100 contactos) 
    la siguiente informacion por cada contacto
        - nombre
        - telefono
        - email
    2) El usuario debe poder elegir entre las siguientes opciones por medio 
    de un menu.
        - Mostrar agenda completa.
        - Agregar contacto nuevo.
        - Buscar un contacto (Mostrar la posicion).
        - Editar un contacto.
        - Eliminar un contacto.
    3) Se debe asegurar una estructura de codigo limpia y reutilizable.
    */

#include<iostream>

using namespace std;

struct Contacto{
    string nombre;
    string telefono;
    string email;
};

const int contactos_maximos = 100;
Contacto agenda[contactos_maximos];

void mostrarAgenda(Contacto agenda[], int n){
    cout<<"Agenda de contactos \n";

    if(n == 0){
        cout<<"No hay contactos\n";
        return;
    }

    for(int i = 0; i < n; i++){
        cout<<"Nombre: "<<agenda[i].nombre<<endl;
        cout<<"Telefono: "<<agenda[i].telefono<<endl;
        cout<<"Email: "<<agenda[i].email<<endl;
    }
}

int main(){
    return 0;
}