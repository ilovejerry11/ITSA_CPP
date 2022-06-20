#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> m >> n;
    if (m < n) {
        for (int i=m; i<=n ;i++) {
            for (int j=0; j<i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    } else {
        for (int i=m; i>=n ;i--) {
            for (int j=0; j<i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    
}
