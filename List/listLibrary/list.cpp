#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for(int i : numbers){
        cout<<i<<"->";
    }
    cout<<endl;

    numbers.push_front(50);
    numbers.push_front(70);

    for(int i : numbers){
        cout<<i<<"->";
    }

    numbers.pop_front();
    numbers.pop_back();

    cout<<endl;
    for(int i : numbers){
        cout<<i<<"->";
    }

    return 0;
}