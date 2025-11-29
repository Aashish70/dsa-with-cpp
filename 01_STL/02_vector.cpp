#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    vector<int> v = {0,3,5,2,68,42,1,6}; //first way creation
    vector<int> v1(10, -1); // second way of creation-- size is 10 and all element is -1.
    vector<int> vec(5);

    vec.reserve(12) // reserve sapce in memory for 12 element

    v.push_back(99); // vector me element dalna
    v.pop_back(); // vector se elemet nikalana

    cout << "capacity of vector: " << v.capacity() << endl;

    cout << "size of vector is: " << v.size() << endl;
    v.insert(v.begin() + 5, 67); //given index par element daal do

    cout << "vector ka front element:" << v.front() << endl;
    cout << "vector ka back element:" << v.back() << endl;

    // v.erase(v.begin() + 1); // delete element from vector at given index
    // v.clear(); // vector ke saare element ko delete karna

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }


    // matrix creation

    return 0;
}