#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    for (int i=0; i<6; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }
    for (int i=5; i>0; i--) {
        cout << v[i] << " ";
    }
    cout << v[0] << endl;
}
