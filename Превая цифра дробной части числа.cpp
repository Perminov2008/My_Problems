#include <iostream>
 
using namespace std;
 
int main()
{
    double d;
    cin >> d;
    cout << (int) ( ( (d - ( (int) d )) *10 ) );
    return 0;
}