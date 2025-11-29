#include <bits/stdc++.h>
using namespace std;


int main(){

    queue<int> q; //queue create karna

    q.push(1); // queue me element dalana
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> q1 = q;  //copy create karna
    queue<int> q2(q1); // coopy bnane ke liye ye bhi syntax use kar sakte hai

    cout << "front element of Queue: " << q.front() << endl;
    cout << "back element of Queue: " << q.back() << endl;

    while(!q.empty()){
        cout << q.front() << " " ; // queue ka front element nikalana
        q.pop(); // queue ke front se element nikalana
    }

    cout << "Check if Queue is empty or not: " << q.empty() << endl; //Queue is empty or not?

    cout << "Size of queue: " << q.size() << endl;

    return 0;
}

