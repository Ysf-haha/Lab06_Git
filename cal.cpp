#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char op;
    double num1, num2, ans;

    cout << "***************************************" << endl;
    cout << "This is a calculator." << endl;
    cout << "Enter #1: ";
    cin >> num1;
    cout << "Enter #2: ";
    cin >> num2;
    cout << "***************************************" << endl;
    cout << "Select an operator (+ - * / ^): " << endl;
    cout << "Your operator: ";
    cin >> op;
    cout << "***************************************" << endl;
    
    switch (op)
    {
    case '+':
      cout << "The sum is " << num1 + num2 << endl;
      break;
    case '-':
      cout << "The difference is " << num1 - num2<< endl;
      break;
    case '*':
      cout << "The product is " << num1 * num2<< endl;
      break;
    case '/':
      cout << "The quotient is " << num1/num2<< endl;
      break;
    case '^':
      cout << num1 << " raised to power " << num2 << " is " << pow(num1, num2) << endl;
      break;
    default:
      cout << "Not a valid operator"<< endl;
    }
    cout << "***************************************";  
}