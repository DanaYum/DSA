#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> answer(n, 0);
    stack<int> st; // Stack to store indices of temperatures
    
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && temperatures[st.top()] < temperatures[i]) {
            int prev_index = st.top();
            st.pop();
            answer[prev_index] = i - prev_index;
        }
        st.push(i);
    }
    
    return answer;
}

int main() {
    int n;
    cout << "Enter number of temperatures: ";
    cin >> n;
    
    vector<int> temperatures(n);
    cout << "Enter temperatures: ";
    for (int i = 0; i < n; ++i) {
        cin >> temperatures[i];
    }
    
    vector<int> result = dailyTemperatures(temperatures);
    
    cout << "Output: ";
    for (int r : result) cout << r << " ";
    cout << endl;
    
    return 0;
}
/*
Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]
Example 2:

Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]
Example 3:

Input: temperatures = [30,60,90]
Output: [1,1,0]
 
*/