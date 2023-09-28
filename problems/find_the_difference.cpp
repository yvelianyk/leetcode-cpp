#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0;i < t.size();i++) {
            if (s[i] != t[i]) return t[i];
        }
        return 'a';
    }

    // more mature method - by using difference in sum of character codes
    char findTheDifferenceASCIIDiff(string s, string t) {
        int sum_s = 0, sum_t = 0;
        for(int i = 0;i < t.size();i++) {
            if (i < t.size() - 1) sum_s += s[i];
            sum_t += t[i];
        }
        return sum_t - sum_s;
    }
};

int main() {
    Solution s;
    cout << s.findTheDifferenceASCIIDiff("abc", "acbe");
}