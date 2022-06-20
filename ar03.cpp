#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int sum = 0;
    for (int i=0; i<6; i++) {
        int num;
        cin >> num;
        sum += num * num * num;
    }
    cout << sum << endl;
}
