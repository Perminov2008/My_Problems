#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n;

    cin >> n;

    while (cin >> n) {
        s.insert(n);
    }

    cout << s.size();

    return 0;
}