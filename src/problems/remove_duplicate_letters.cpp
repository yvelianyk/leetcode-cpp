#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// https://leetcode.com/problems/remove-duplicate-letters
class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> result_stack;
        vector<int> count(26, 0); 
        vector<bool> visited(26, false);
    
        for (char c : s) {
            count[c - 'a']++;
        }

        for (char c : s) {
            count[c - 'a']--;
        
            if (visited[c - 'a']) {
                continue; 
            }
            
            while (
                !result_stack.empty() &&
                c < result_stack.top() &&
                count[result_stack.top() - 'a'] > 0
            ) {
                visited[result_stack.top() - 'a'] = false;
                result_stack.pop();
            }
            
            result_stack.push(c);
            visited[c - 'a'] = true;
        }
    
        string result = "";
        while (!result_stack.empty()) {
            result = result_stack.top() + result;
            result_stack.pop();
        }
    
        return result;
    }
};

int main() {
    Solution s;
    cout << s.removeDuplicateLetters("bcabc");
}