#include <iostream>

using namespace std;

// https://leetcode.com/problems/maximum-odd-binary-number/
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int size = s.size();
        int count_set = 0;
        for(char c: s) {
            if (c == '1') count_set++;
        }
        if (count_set == 0) return s;
        s[size - 1]='1';
        count_set--;
        for(int i = 0;i < s.size() - 1;i++) {
            s[i] = count_set-- > 0 ? '1' : '0';
        }
        return s;
    }
};

int main() {
    Solution s;
    cout << "result: " << s.maximumOddBinaryNumber("0111");

}