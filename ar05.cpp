#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> time(25, 0);
    int cars;
    for (int i=0; i<n; i++) {
        int st, ed;
        cin >> st >> ed;
        for (int j=st; j<ed; j++) {
            time[j]++;
            if (cars < time[j]) {
                cars = time[j];
            }
        }
    }
    cout << cars << endl;
}
