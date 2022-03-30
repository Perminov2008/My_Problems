#include <iostream>
 
using namespace std;
 
int main()
{
    long long a ,b ,c ,d,w;
    cin >> a;
    for(int i=0;i<a;i++){
    	cin >> b >> c >> d;
    	if (c % d == d - 1)
        	w = c;
        else{
        	w = c / d * d;
        	w -= 1;
		}
        if (w > c or w < b){
	        cout << c / d + c % d << "\n";
		}
		else
        	cout <<w / d + w % d << "\n";
	}
}
