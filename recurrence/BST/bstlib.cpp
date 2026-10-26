#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> arbol1;

    arbol1.insert(10);
    arbol1.insert(6);
    arbol1.insert(15);
    arbol1.insert(4);

    for(int i: arbol1){
        cout<<i<<"->";
    }

    return 0;
}