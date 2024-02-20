#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int, int> map;
    int size;
    cout << "Enter the size of set A: ";
    cin >> size;
    int setA[size];
    cout << "Enter the elements for set A:\n";
    for (int i = 0; i < size; ++i) {
        cin >> setA[i];
        map[setA[i]]++;
    }
    cout << "Enter the size of set B: ";
    cin >> size;
    int setB[size];
    cout << "Enter the elements for set B:\n";
    for (int i = 0; i < size; ++i) {
        cin >> setB[i];
        map[setB[i]]++;
    }
    cout << "The union of set A and set B is: ";
    for(int i: setA)
        if(map[i] != 0) {
            cout << i << " ";
            map[i] = 0;
        }
    for(int i: setB)
        if(map[i] != 0) {
            cout << i << " ";
            map[i] = 0;
        }
    return 0;
}