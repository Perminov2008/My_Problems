#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b=0,b1=1,c;
    cin >> a;
    if (a==0){
    	cout << 0;
	}
	else{
	    for (int i=0;i<a-1;i++){
	    	c=b;
	    	b=b1;
	    	b1+=c;
		}
	    cout << b1;
	}
}