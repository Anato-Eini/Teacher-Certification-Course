#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<string, string> map;
    int size;
    string input;
    cout << "Enter the number of elements in the map: ";
    cin >> size;
    for (int i = 0; i < size; ++i) {
        cin >> input;
    }
    return 0;
}