#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> v = {"apple", "Orange", "Coconut", "Lichi", "Mango", "Guwava"};
    string s;
    
    cout << "Enter the value to search: ";
    cin >> s;

    bool found = false;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == s) {
            cout << "Your value is found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Your value is not found in the array." << endl;
    }

    return 0;
}
