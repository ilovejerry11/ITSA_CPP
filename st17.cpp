#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string s;
    while(cin >> s) {
        int flag = 1;
        for (int i=0; i<s.size()/2; i++) {
            if (s[i] != s[s.size()-i-1]) {
                flag = 0;
                cout << "NO\n";
                break;
            }
        }
        if (flag) cout << "YES\n";
    }
}
