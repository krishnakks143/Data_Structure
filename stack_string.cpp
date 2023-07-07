#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    int minLength(std::string s) {
        int n = s.size();
        std::stack<char> mystack;

        for (int i = 0; i < n; i++) {
            if (!mystack.empty() && mystack.top() == 'A' && s[i] == 'B') {
                mystack.pop();
            } else if (!mystack.empty() && mystack.top() == 'C' && s[i] == 'D') {
                mystack.pop();
            } else {
                mystack.push(s[i]);
            }
        }

        int k = mystack.size();
        return k;
    }
};

int main() {
    Solution solution;
    std::string str = "ABCDAB";
    int result = solution.minLength(str);
    std::cout << "Minimum length: " << result << std::endl;
    return 0;
}
