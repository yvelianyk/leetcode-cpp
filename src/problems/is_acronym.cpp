#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int size = (int) words.size();
        if (s.size() != size) return false;
        for(int i = 0; i<size;i++) {
            if (words[i][0] != s[i]) return false;
        }
        return true;
    }
};
