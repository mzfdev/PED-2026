#include <iostream>
#include <queue>

using namespace std;

int main(){

    //FIFO
    queue<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);

    cout<<"Primer elemento que saldra"<<numbers.front()<<endl;
    cout<<"Ultimo elemento que saldra"<<numbers.back()<<endl;

    while(!numbers.empty()){
        numbers.pop();
    }
    cout<<"Siguiente elemento que saldra"<<numbers.front()<<endl;
    return 0;
}