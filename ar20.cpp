#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(128, 0);
    for (int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        if (v[tmp] == 1) {
            cout << 0 << endl;
            return 0;
        }
        v[tmp] = 1;
    }
    cout << 1 << endl;
}
