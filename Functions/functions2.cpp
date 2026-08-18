#include<iostream>
#include<math.h>

using namespace std;

int suma(int a, int b){ return a + b; }
double suma(double a, double b){ return a + b; }
double suma(int a, double b){ return a + b; }
double suma(double a, int b){ return a + b; }

int main(){

    auto x = suma(2.6, 3.5);
    auto y = suma(2, 3);

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    return 0;
}
