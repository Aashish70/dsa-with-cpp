#include <bits/stdc++.h>

using namespace std;

int main(){

    pair<int, char> p = { 1, 'f'}; // can store any type of dataType

    // p.first = 1;
    // p.second = 'a';
    
    cout << p.first << " " << p.second << endl;

    cout << typeid(p.first).name() << endl; // type of variable

    return 0;
}