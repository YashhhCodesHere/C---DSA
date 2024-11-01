#include <bits/stdc++.h>
using namespace std;

/*
    Operators in C++:
    1. Arithmetic Operators
    2. Relational Operators
    3. Logical Operators
    4. Bitwise Operators
    5. Assignment Operators
    6. Misc Operators
*/

int main()
{
    cout << "Arithmetic Operators:" << endl;
    int a = 10, b = 20;
    // Binary Operators: Require two operands
    cout << "a + b = " << a + b << endl;    // Addition
    cout << "a - b = " << a - b << endl;    // Subtraction
    cout << "a * b = " << a * b << endl;    // Multiplication
    cout << "b / a = " << b / a << endl;    // Division
    cout << "b % a = " << b % a << endl;    // Modulo

    // Unary Operators: Require one operand
    cout << "a++ = " << a++ << endl;        // Post-Increment
    cout << "++a = " << ++a << endl;        // Pre-Increment
    cout << "b-- = " << b-- << endl;        // Post-Decrement
    cout << "--b = " << --b << endl;        // Pre-Decrement

    return 0;
}