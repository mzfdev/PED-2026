#include <iostream>
#include <list>

using namespace std;

struct Client{
    int id;
    string name;
    int age;
};

int main(){

    list<Client> clients;
    //list<Client> clients2;

    int opc;

    do{
        cout<<"Ingrese una opcion"<<endl;
        cin>>opc;

        switch(opc){
            case 1:{
                int id;
                int age;
                cout<<"Ingrese un cliente"<<endl;
                cin>>id;
                cout<<"Ingrese una edad"<<endl;
                cin>>age;
                cout<<"Ingrese el nombre"<<endl;
                cin>>name;

                clients.push_back({id, name, age});
                break;
            }
        }

    }while(opc != 100);

    for(Client c : clients){
        cout<<c.id<<endl;
        cout<<c.name<<endl;
    }

    return 0;
}