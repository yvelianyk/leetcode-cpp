#include <vector>

using namespace std;

// https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
class Solution {
public:
    vector<int> findArray(vector<int> &pref) {
        vector<int> res(pref.size());
        res[0] = pref[0];
        for (int i = 1; i < pref.size(); i++)
            res[i] = pref[i - 1] ^ pref[i];
        return res;
    }
};

int main() {
    Solution s;
    vector<int> pref = {5, 2, 0, 3, 1};
    vector<int> res = s.findArray(pref);
}