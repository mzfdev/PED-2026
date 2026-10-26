#include<iostream>

using namespace std;

struct Nodo{
    int data;
    Nodo* izq;
    Nodo* der;
};

Nodo* crearNodo(int valor){
    Nodo* nodo_nuevo = new Nodo();
    nodo_nuevo->data = valor;
    nodo_nuevo->izq = nullptr;
    nodo_nuevo->der = nullptr;
    return nodo_nuevo;
} 

Nodo* insertar(Nodo* raiz, int valor){
    //Caso Base:
    if(raiz == nullptr){
        return crearNodo(valor);
    }
    //Caso/casos recursivos:
    if(valor < raiz->data){
        raiz->izq = insertar(raiz->izq, valor);
    }else if(valor > raiz->data){
        raiz->der = insertar(raiz->der, valor);
    }

    return raiz;
}

void preorder(Nodo* raiz){
    if(raiz != nullptr){
        //R
        cout<<raiz->data<<"->";
        //I
        preorder(raiz->izq);
        //D
        preorder(raiz->der);
    }
}

void inorder(Nodo* raiz){
    if(raiz != nullptr){
        //I
        inorder(raiz->izq);
        //R
        cout<<raiz->data<<"->";
        //D
        inorder(raiz->der);
    }
}

void postorder(Nodo* raiz){
    if(raiz != nullptr){
        //I
        postorder(raiz->izq);
        //D
        postorder(raiz->der);
        //R
        cout<<raiz->data<<"->";
    }
}

void liberar(Nodo* raiz){
    if(raiz != nullptr){
        //I -> Liberamos subarbol izquierdo
        liberar(raiz->izq);
        //D-> Liberamos subarbol derecho
        liberar(raiz->der);
        //R -> Y luego eliminamos
        delete raiz;
    }
}


int main(){

    Nodo* arbol1 = nullptr;

    arbol1 = insertar(arbol1, 10);
    arbol1 = insertar(arbol1, 6);
    arbol1 = insertar(arbol1, 15);
    arbol1 = insertar(arbol1, 4);

    cout<<"Inorder: ";
    inorder(arbol1);
    cout<<endl;

    return 0;
}