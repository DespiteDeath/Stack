#include <iostream>
#include "stack.hpp"
using namespace std;

int main() {
    try {
        cout << endl << "Stack of int" << endl;
        Stack<int> A;
        A.push(23);
        A.push(15);
        A.push(1);
        A.push(33);
        A.push(9);
        A.push(12);

        for(int i = 0; i < (A.count()+i); i++)
        {
            cout << A.pop() << endl;
        }
        cout << endl << endl;

        cout << "Stack of char" << endl;
        Stack<char> B(2);
        B.push('T');
        B.push('u');
        B.push(';');
        B.push('+');
        B.push('98');

        for(int i = 0; i < (B.count()+i); i++)
        {
            cout << B.pop();
        }
        cout << endl << endl;
    }

    catch(const exception& e)
    {
        cout << e.what() << endl;
    }
}