#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(const string& expression){
    stack<char> stack;

    for(char c: expression){
        //Para todo elemento de apertura, apilamos
        if(c == '(' || c == '[' || c == '{'){
            stack.push(c);
        }

        else if(c == ')' || c == ']' || c == '}'){
            if(stack.empty()){
                return false;
            }

            char top = stack.top();
            stack.pop();

            if(
                (c==')' && top != '(') ||
                (c==']' && top != '[') ||
                (c=='}' && top != '{')
            ){
                return false;
            }
        }
        return stack.empty();
    }

}

int main(){
    string expression = "{[()]}";

    cout<<isBalanced(expression);

    return 0;
}