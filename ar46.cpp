#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    double tmp, sum = 0;
    while(cin >> tmp) {
        sum += tmp * tmp;
    }
    cout << fixed << setprecision(6)<< sum << endl;
}
