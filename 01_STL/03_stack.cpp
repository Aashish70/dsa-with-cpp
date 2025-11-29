#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st; // create a stack

    st.push(10); //stack ke andar element dalana
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int> st1 = st; // creating copy

    cout << "Size of stack :" st.size() << endl; //return size of stack 

    
    cout << "Check if stack is empty or not: " st.empty() << endl; //stack is empty or not?
    
    //printing the stack element
    while(!st1.empty()){
        cout << st1.top() << " "; // give top element
        st1.pop(); //stack se element bahar nikalana
    }
       

    return 0;
}