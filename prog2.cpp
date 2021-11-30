#include <iostream>
using namespace std;

int main()
{
    double op1, op2;
    string operation;

    cout << "Enter the operation followed by two integers with spaces in between. ";
    cin >> operation >> op1 >> op2;

    if (operation == "+") {
        cout << "Adding " << op1 << " and " << op2 << " calculates to " << (op1 + op2);
    } else if (operation == "-") {
        cout << "Subtracting " << op1 << " and " << op2 << " calculates to " << (op1 - op2);
    } else if (operation == "/") {
        cout << "Dividing " << op1 << " and " << op2 << " calculates to " << (op1 / op2);
    } else if (operation == "*") {
        cout << "Multiplying " << op1 << " and " << op2 << " calculates to " << (op1 * op2);
    } else {
        cout << "Invalid operation.";
    }

    return 0;
}