#include <iostream>

using namespace std;

// https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/description/
class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int res = 0;

        for (int i = 0; i < s.length();i++) {
            count = s[i] == 'E' ? count + 1 : count - 1;
            res = count > res ? count : res;
        }
        return res;
    }
};

int main() {
    Solution s;
    int res = s.minimumChairs("ELELEEL");
    cout << res;
}