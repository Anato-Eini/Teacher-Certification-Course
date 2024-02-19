#include "PriorityQueue.h"

void PriorityQueue::enqueue(pair<int, int> &pairValue) {
    arr.push_back(pairValue);
    int n = (int)arr.size() - 1;
    while (n > 0){
        int parent = (n - 1) / 2;
        if(arr[parent].first < arr[n].first)
            swap(arr[parent], arr[n]);
        n = parent;
    }
}

void PriorityQueue::heapify(int n, int size) {
    int left = n * 2 + 1, right = n * 2 + 2, biggest = n;
    if(left < size && arr[biggest].first < arr[left].first)
        biggest = left;
    if(right < size && arr[biggest].first < arr[right].first)
        biggest = right;
    if(biggest != n){
        swap(arr[biggest], arr[n]);
        heapify(biggest, size);
    }
}

pair<int, int> PriorityQueue::dequeue() {
    pair<int, int> firstElement = arr[0];
    swap(arr[0], arr[arr.size() - 1]);
    arr.pop_back();
    heapify(0, (int)arr.size());
    return firstElement;
}

void PriorityQueue::print() {
    cout << "Priority Queue:\n";
    for(const pair<int, int>& p: arr)
        cout << "Element: "<< p.second << ", Priority: " << p.first << '\n';
}

