#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> m >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
