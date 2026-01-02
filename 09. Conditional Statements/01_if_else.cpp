#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (0)
        cout << "Not Born Yet" << endl;
    if (-5)
        cout << "Alive" << endl;
    if (5)
        cout << "Human" << endl;
    if (age >= 18)
        cout << "can vote" << endl;
    if (age >= 45)
        cout << "contest for election" << endl;
    else
        cout << "can't vote" << endl;
}