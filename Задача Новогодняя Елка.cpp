#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	 
	int n;
	cin>>n;	 
	vector<int>a(n+1),b(n+1),c(n+1);	 
	for(int i=2;i<=n;i++){
	    cin>>a[i];
	    b[a[i]]++;
	}
	for(int i=2;i<=n;i++){
	    if(!b[i]){
	        c[a[i]]++;
	    }	 
	}	 
	for(int i=1;i<=n;i++){	 
	    if(b[i]&&c[i]<3){
	        cout<<"NO"<<endl;
	        return 0;
	    }	 
	}	 
	cout<<"YES"<<endl;	 
}