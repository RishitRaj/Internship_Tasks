// A calculator that does basic arithmetic operations such as addition,subtraction,multiplication and division
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the first number" << endl;
    float a, b;
    char oper;
    cin >> a;
    cout << "Enter the second number\n";
    cin >> b;
    cout << "Enter the operator from '+', '-', '*', '/'  ";
    cin >> oper;
    switch (oper)
    {
    case '+':
        cout << "The sum is " << a + b;
        break;
    case '-':
        cout << "The differnce is " << a - b;
        break;
    case '*':
        cout << "The product is " << a * b;
        break;
    case '/':
        cout << "The quotient is " << a / b;
        break;
    default:
        cout << "Select a valid operator";
        break;
    }
}
