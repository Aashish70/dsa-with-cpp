#include <bits/stdc++.h>

using namespace std;

int main(){

    //Imp: set store unique element in particular order
    set<int> s;

    s.insert(1);
    s.insert(7);
    s.insert(2);
    s.insert(24);
    s.insert(9);


    // cout << "Size of the set :" << s.size() << endl;
    // cout << "check if set is empty or not? " << s.empty() << endl;
    // cout << "check if element present in set or not? :" << s.count(2) << endl;
 

    // this will return an iterator
    if (s.find(2) != s.end()) {
        cout << "2 is present in the set" << endl;
    } else {
        cout << "2 is NOT present in the set" << endl;
    }

    s.erase(1); // remove element from set
    s.clear(); //clear all the element from set


    for(int ele : s){
        cout << ele << " ";
    }

    cout << endl;

    // second method of printing element using iterator
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    return 0;
}