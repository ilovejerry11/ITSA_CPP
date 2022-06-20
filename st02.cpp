#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    cin.ignore(100, '\n');

    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        string reverse_s(s.rbegin(), s.rend());
        cout << reverse_s << endl;
    }
}
