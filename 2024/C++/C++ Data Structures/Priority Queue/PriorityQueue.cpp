#include <algorithm>
#include "PriorityQueue.h"

void PriorityQueue::enqueue(pair<int, int> pairValue) {
    arr.push_back(pairValue);
    int n = (int)arr.size() - 1;
    while (n > 0){
        int parent = (n - 1) / 2;
        if(arr[parent].first < arr[n].first)
            swap(arr[parent], arr[n]);
        n = parent;
    }
    size++;
    insertionSort();
}

void PriorityQueue::heapify(int n) {
    int left = n * 2 + 1, right = n * 2 + 2, biggest = n;
    if(left < size && arr[biggest].first < arr[left].first)
        biggest = left;
    if(right < size && arr[biggest].first < arr[right].first)
        biggest = right;
    if(biggest != n){
        swap(arr[biggest], arr[n]);
        heapify(biggest);
    }
}

pair<int, int> PriorityQueue::dequeue() {
    pair<int, int> firstElement = arr[0];
    swap(arr[0], arr[size - 1]);
    arr.pop_back();
    heapify(0);
    size--;
    return firstElement;
}

void PriorityQueue::print() {
    cout << "Priority Queue:\n";
    for(const pair<int, int>& p: arr)
        cout << "Element: "<< p.second << ", Priority: " << p.first << '\n';
}

pair<int, int> PriorityQueue::isPresent(int element) {
    auto it = find_if(arr.begin(), arr.end(), [element](const auto& p) {
        return p.second == element;
    });
    return (it != arr.end()) ? *it : make_pair(0, -1);
}

void PriorityQueue::swapPrioVal() {
    for(pair<int, int>& i: arr)
        swap(i.first, i.second);
    for (int i = size / 2 - 1; i >= 0 ; --i)
        heapify(i);
    insertionSort();
}

const vector<pair<int, int>> &PriorityQueue::getArr() const {
    return arr;
}

void PriorityQueue::insertionSort(){
    for(int i = 1; i < size; i++)
        if(arr[i - 1].first < arr[i].first){
            pair<int, int> temp = arr[i];
            int j;
            for(j = i - 1; j >= 0; j--) {
                if (arr[j].first < temp.first)
                    arr[j + 1] = arr[j];
                else break;
            }
            arr[j + 1] = temp;
        }
}