#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description
class Solution {
public:
    int getLastMoment(int n, vector<int> &left, vector<int> &right) {
        if (left.empty() && right.empty()) return 0;
        if (left.empty()) {
            int min = *(min_element(right.begin(), right.end()));
            return n - min;
        }
        if (right.empty()) {
            return *(max_element(left.begin(), left.end()));
        }
        int min = *(min_element(right.begin(), right.end()));
        int max = *(max_element(left.begin(), left.end()));
        return std::max(n - min, max);
    }
};

int main() {
    vector<int> left = {4, 3};
    vector<int> right = {0, 1};
    Solution s;
    int str = s.getLastMoment(4, left, right);
    cout << str;
}
