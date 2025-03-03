#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> nextLargerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, -1); // Initialize result vector with -1
    stack<int> st; 

    for (int i = 0; i < n; i++) {
        // While stack is not empty and the current element is greater than the element at index stored in stack
        while (!st.empty() && arr[i] > arr[st.top()]) {
            res[st.top()] = arr[i]; 
            
            st.pop(); 
        }
        st.push(i); 
    }

    return res; 
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6};
    vector<int> result = nextLargerElement(arr);

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}