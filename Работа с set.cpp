#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;
    int f;
    set <char> st;
    for(int i=0;i<s.size();i++){
        if (s[i]=='8'|| s[i]=='9'|| s[i]>'9'){
        	cout << "NO";
        	f=1;
		}
    }
    if (f==0){
    	cout << "YES";
	}
}