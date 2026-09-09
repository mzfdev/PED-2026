/*
Ejercicio: Modificar los datos de un estudiante mediante punteros
Crea un programa que permita almacenar los datos de un estudiante:

Nombre -> string;
Edad -> int;
Promedio -> float;

El programa debe:

Crear un struct Estudiante.
Crear una función para mostrar los datos.
Crear una función para modificar el promedio utilizando un puntero al struct.
Crear una función que determine si el estudiante aprobó.
Utilizar un puntero para acceder a los datos del estudiante.

La nota mínima para aprobar es 6.0. >=
*/

#include<iostream>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

void MostrarEstudiante(const Estudiante* estudiante);
void ModificarPromedio(Estudiante* estudiante, float nuevo_promedio);
bool Aprobo(const Estudiante* estudiante);

int main(){

    Estudiante student {
        "Pepito",
        19,
        6.0f,
    };

    Estudiante* student_ptr = &student;

    std::cout<<"Datos del estudiante: "<<std::endl;
    MostrarEstudiante(student_ptr);

    ModificarPromedio(student_ptr, 3.5f);

    std::cout<<"\nDatos del estudiante despues: "<<std::endl;
    MostrarEstudiante(student_ptr);

    if(Aprobo(student_ptr)){
        std::cout<<"\nAprobado"<<std::endl;
    }else{
        std::cout<<"\nNo aprobado"<<std::endl;
    }

    return 0;
}

void MostrarEstudiante(const Estudiante* estudiante){
    std::cout<<"Nombre: "<<estudiante->nombre<<std::endl;
    std::cout<<"Edad: "<<estudiante->edad<<std::endl;
    std::cout<<"Promedio: "<<estudiante->promedio<<std::endl;
}
//estudiante->nombre ->Quiero el nombre de lo que contiene esa direccion
// !=
//estudiante.nombre ->Quiero el nombre de esta direccion

void ModificarPromedio(Estudiante* estudiante, float nuevo_promedio){
    estudiante->promedio = nuevo_promedio;
}

bool Aprobo(const Estudiante* estudiante){
    return estudiante->promedio >= 6.0f;
}
