#include<iostream>
#include<math.h>

using namespace std;

template<typename T1, typename T2>
auto max_number(T1 a, T2 b) -> decltype((a > b) ? a : b){
    return (a > b) ? a : b;
}

int main(){

    cout<<max_number(3,7)<<endl; // 7 -> Int
    cout<<max_number(2.5,1.2)<<endl; // 2.5 -> Double
    cout<<max_number(2,1.2)<<endl;

    return 0;
}
