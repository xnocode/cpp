#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char op;
    cin >> x >> op >> y;
    switch (op)
    {
    case '+':
        cout << x + y << endl;
        break;
    case '-':
        cout << x - y << endl;
        break;
    case '*':
        cout << x * y << endl;
        break;
    case '/':
        cout << x / y << endl;
        break;
    default:
        cout << "Invalid" << endl;
        break;
    }
}