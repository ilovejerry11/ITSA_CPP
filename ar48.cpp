#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string s;
    cin >> s;


    int num[4];
    for (int i=0; i<4; i++) {
        num[i] = (int)s[i] - '0';
        num[i] = (num[i] + 7) % 10;
    }

    swap(num[0], num[2]);
    swap(num[1], num[3]);

    for (int i=0; i<4; i++) {
        cout << num[i];
    }
    cout << endl;
}
