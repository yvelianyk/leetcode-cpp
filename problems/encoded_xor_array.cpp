#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/decode-xored-array/
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result;
        result.push_back(first);
        for (int& e: encoded) {
            result.push_back(result.back() ^ e);
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> encoded = {1,2,3};
    for (auto e : s.decode(encoded, 1)){
        cout << e;
    }

}