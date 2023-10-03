#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        vector<int> digits = get_digits(x);
        int start = 0, end = digits.size() - 1;

        while (start < end) {
            if (digits[start++] != digits[end--]) return false;
        }
        
        return true;
    }

private:
    vector<int> get_digits(int x) {
        vector<int> result;
        while(x > 0) {
            result.push_back(x % 10);
            x = x/10;
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome(32);
}