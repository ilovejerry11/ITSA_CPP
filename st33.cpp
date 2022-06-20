#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            sum += s[i] - 'A' + 1;
        } else {
            sum += s[i] - 'a' + 1;
        }
    }
    cout << sum << endl;
}
