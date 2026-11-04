#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

void registrarUsuario(map<string, vector<string>>& red, vector<string>& usuarios){
    int n;
    cout<<"Cuantos usuarios desea ingresar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        string nombre;
        cin>>nombre;
        usuarios.push_back(nombre);
        red[nombre] = {};
    }
}

void crearConexiones(map<string, vector<string>>& red){
    int n;
    cout<<"Cuantas conexiones desea crear: ";
    cin>>n;

    for(int i=0; i<n; i++){
        string usuario1, usuario2;
        cout<<"Ingrese el usuario 1: ";
        cin>>usuario1;
        cout<<"Ingrese el usuario 2: ";
        cin>>usuario2;
        red[usuario1].push_back(usuario2);
        red[usuario2].push_back(usuario1);
    }
}


void crearConexionDirigida(map<string, vector<string>>& red){
    int n;
    cout<<"Cuantas conexiones desea crear: ";
    cin>>n;

    for(int i=0; i<n; i++){
        string usuario1, usuario2;
        cout<<"Ingrese el usuario 1: ";
        cin>>usuario1;
        cout<<"Ingrese el usuario 2: ";
        cin>>usuario2;
        red[usuario1].push_back(usuario2);
    }
}


int main(){
    map<string, vector<string>> red;
    vector<string> usuarios;

    registrarUsuario(red, usuarios);
    crearConexiones(red);

    return 0;
}