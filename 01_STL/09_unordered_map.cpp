#include<bits/stdc++.h>

using namespace std;

int main(){

    unordered_map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} }; //way to create map

    people["Ashish"] = 26; //insert element
    people.insert({"Rudransh", 5}); //second way to insert element
    people.emplace("Prithvi", 30); //third way to insert element

    cout << "size of map: " << people.size() << endl; // check the size of unordered map
    people.erase("John");// deleting element from unordered map
    cout << "check element is present in unordered map or not? " << people.count("Ashish") << endl;
    // people.clear(); //clear all the element of  << endl;

    //to find element using iterator
    auto it = people.find("Prithvi");
    if (it != people.end()) {
        cout << it->first << " " << it->second;
    } else {
        cout << "Not found";
    }

    //printing the element of unordered map
    for(auto person : people){
        cout << person.first << " " << person.second << endl;
    }

    return 0;
}