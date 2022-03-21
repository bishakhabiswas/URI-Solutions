#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 1, b = 1, c = 0;

    cout << "Enter the number of values: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << a << " ";
            continue;
        }
        if(i == 2)
        {
            cout << b << " ";
            continue;
        }
        c= a+b;
        a = b;
        b = c;

        cout << c << " ";
    }
    return 0;
}
