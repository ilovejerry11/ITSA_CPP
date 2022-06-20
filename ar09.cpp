#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;

    sort(str.begin(), str.end()); // str will be like ,,,,13579

    str = str.substr(str.size()/2); // remove ,,,,...
    int min = stoi(str);
    string str2(str.rbegin(), str.rend()); // reverse str
    int max = stoi(str2);
    cout << max - min << endl;
}
