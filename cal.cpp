#include <iostream>
using namespace std;
int main()
{
    int check = 1;
    do
    {
        double a, b;
        cout << "Enter 1st Number: ";
        cin >> a;
        cout << "Enter 2nd Number: ";
        cin >> b;
        char op;
        cout << "+ - * /\n";
        cout << "Enter Operation:- ";
        cin >> op;
        switch (op)
        {
        case '+':
            cout << "Result = " << a + b;
            break;
        case '-':
            cout << "Result = " << a - b;
            break;
        case '*':
            cout << "Result = " << a * b;
            break;
        case '/':
            cout << "Result = " << a / b;
            break;
        default:
            cout << "Invalid Choice";
            break;
        }
        cout << "\n\nDo you want to use calculator again ?\nEnter 1. Yes\n2. No\n";
        cin >> check;
    } while (check == 1);
    return 0;
}