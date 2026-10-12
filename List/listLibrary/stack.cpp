#include <iostream>
#include <stack>

using namespace std;

int main(){

    //LIFO
    stack<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);

    cout<<"TOP: "<<numbers.top()<<endl; //4
    numbers.pop(); //Eliminar 4
    cout<<"TOP: "<<numbers.top()<<endl; //3
    numbers.pop(); //Eliminar 3
    cout<<"TOP: "<<numbers.top()<<endl; //2
    numbers.pop(); //Eliminar 2

    return 0;
}