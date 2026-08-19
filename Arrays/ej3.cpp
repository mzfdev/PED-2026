/*
Ejercicio:
Almacenar 4 notas academicas de 3 alumnos, 
luego por cada alumno calcular el promedio 
de sus notas y mostrarlo en pantalla.
*/
#include <iostream>
using namespace std;

int main(){

    const int alumnos = 3;
    const int examenes = 4;

    int notas[alumnos][examenes] = {
        {85, 90, 78, 92}, // i 
        //j //j+1 ...
        {76, 88, 80, 85}, // i+1
        {90, 91, 89, 95}  // i+2
    };

    for(int i = 0; i<alumnos; i++){
        int suma = 0;
        for(int j=0; j<examenes; j++){
            suma += notas[i][j];
        }
        double promedio = (double)suma/examenes;
        cout<<"\nPromedio: "<<promedio;
    }
    return 0;
}