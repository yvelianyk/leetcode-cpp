#include <string>

using namespace std;

// https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful
class Solution {
public:
    int minChanges(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] != s[i + 1]) res++;
        }
        return res;
    }
};
