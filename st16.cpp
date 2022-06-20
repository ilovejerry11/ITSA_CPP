#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (i == 4) cout << s[i] << endl;
        else        cout << s[i] << "   ";
    }
}
