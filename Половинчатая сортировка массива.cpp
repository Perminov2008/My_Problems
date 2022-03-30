#include <iostream>
#include <string>
#include <vector>

using namespace std;

void BS(vector<int>& v) {
  for (size_t i = 0; i + 1 < v.size(); ++i) {
    for (size_t j = 0; j + 1 < v.size() - i; ++j) {
      if (v[j + 1] < v[j]) {
        swap(v[j], v[j + 1]);
      }
    }
  }
}
void BS1(vector<int>& v) {
  for (size_t i = 0; i + 1 < v.size(); ++i) {
    for (size_t j = 0; j + 1 < v.size() - i; ++j) {
      if (v[j + 1] > v[j]) {
        swap(v[j], v[j + 1]);
      }
    }
  }
}
int main(){
	int n,s;
	cin >> n;
	vector <int> g;
	vector <int> g1;
	vector <int> g2;
	for(int i=0;i<n;i++){
		cin >> s;
		g.push_back(s);
		if (i<n/2){
			g1.push_back(s);
		}
		else{
			g2.push_back(s);
		}
	}
	BS(g1);
	for(int j=0;j<(n/2);j++){
		cout << g1[j] << " ";
	}
	BS1(g2);
	for(int j=0;j<(n/2);j++){
		cout << g2[j] << " ";
	}
}