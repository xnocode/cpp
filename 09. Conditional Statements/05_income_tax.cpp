#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 5)
        cout << 0 << endl;
    else if (n <= 10)
        cout << n * 0.2 * 100000 << endl;
    else
        cout << n * 0.3 * 100000 << endl;
}
