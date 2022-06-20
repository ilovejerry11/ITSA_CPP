#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> v(130, 0);
    for (int i=0; i<s.size(); i++) {
        int pos = (int)s[i]; // ASCII value
        v[pos] ++;
    }

    // sort(v.begin(), v.end());
    
    for (int i=129; i>=0; i--) {
        if (v[i] == 0) continue;
        cout << i << " "  << v[i] << endl;
    }
}
