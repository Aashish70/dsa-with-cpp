#include<bits/stdc++.h>

using namespace std;


int main(){

    unordered_set<int> ust; // unordered set ko create karna

    ust.insert(1); // unordered set me element dalana
    ust.insert(7);
    ust.insert(2);
    ust.insert(24);
    ust.insert(9);

    cout << "unordered set ka size: " << ust.size() << endl; // size nikalana
    // ust.clear(); // unordered set ke saare element delte karna
    cout << "delete single element from unordered set: " << ust.erase(24) << endl;

     // this will return an iterator
    if (ust.find(7) != ust.end()) {
        cout << "7 is present in the set" << endl;
    } else {
        cout << "7 is NOT present in the set" << endl;
    }


    //unordered set ko print karna
    for(auto ele : ust){
        cout << ele << " ";
    }

    return 0;
}