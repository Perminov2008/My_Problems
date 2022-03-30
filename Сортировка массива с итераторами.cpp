#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int a,c;
	cin >> a;
	vector<int> b;
	vector<int>::iterator it;
	for(int i=0;i<a;i++){
		cin >> c;
		b.push_back(c);
	}
	sort(b.begin(),b.end());
	for(it=b.begin();it!=b.end();it++){
		cout << *it << " ";
	}
		
}