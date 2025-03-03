#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        for (char i : s) {
            if (i == '(' || i == '{' || i == '[') {
                st.push(i);
            } else {
                if (st.empty()) return false;
                char c = st.top();
                st.pop();
                if ((i == ')' && c != '(') || 
                    (i == '}' && c != '{') || 
                    (i == ']' && c != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    
    // Test cases
    std::string test1 = "()[]{}";  // Valid
    std::string test2 = "(]";      // Invalid
    std::string test3 = "({[]})";  // Valid
    std::string test4 = "(({})]";  // Invalid

    // Print results
    std::cout << "Test 1: " << sol.isValid(test1) << std::endl;  // Output: 1 (true)
    std::cout << "Test 2: " << sol.isValid(test2) << std::endl;  // Output: 0 (false)
    std::cout << "Test 3: " << sol.isValid(test3) << std::endl;  // Output: 1 (true)
    std::cout << "Test 4: " << sol.isValid(test4) << std::endl;  // Output: 0 (false)

    return 0;
}
