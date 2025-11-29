#include <bits/stdc++.h>
using namespace std;

int main(){
    //Priority queue is implented from Heap.

    priority_queue<int> pq; //creating the priority queue

    pq.push(1); //O(log n) element dalana
    pq.push(5);
    pq.push(3);
    pq.push(9);
    pq.push(6);

    cout << "Size of the priority queue: " << pq.size() << endl;
    cout << "Check if priority queue is empty or not: " << pq.empty() << endl;

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();  // O(log n) 
    }

    return 0;
}