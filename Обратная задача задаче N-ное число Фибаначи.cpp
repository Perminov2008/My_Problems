#include <iostream>

using namespace std;

int main ()
{
    int n, a = 1, b = 0, i = 0;
    cin >> n;
    while (n != b)
    {
        a = a + b;
        b = a - b;
        ++i;
        if (n < b)
        {
            i = -1;
            break;
        }
    }
    cout << i ;
    return 0;
}