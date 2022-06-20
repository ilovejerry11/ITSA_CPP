#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string s;
    cin >> s;
    string ss(s.rbegin(), s.rend());
    for (int i=0; i<ss.size(); i++) {
        if (ss[i] >= 'a' && ss[i] <= 'z') {
            cout << (char)toupper(ss[i]);
        } else {
            cout << (char)tolower(ss[i]);
        }
    }
    cout << endl;
}
