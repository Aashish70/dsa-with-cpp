#include<bits/stdc++.h>
#include <tuple>

using namespace std;

int main(){

    tuple<int, char, double> t = {4, 'a', 1.5};

    //tuple ke element ko access karna
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

    return 0;
}
