#include <vector>

using namespace std;

// https://leetcode.com/problems/build-array-from-permutation/description/
class Solution {

public:
    vector<int> buildArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(size, 0);
        for (int i = 0;i < size; i++) {
            res[i] = nums[nums[i]];
        }
        return res;
    }
};

int main () {
    Solution s;
    vector<int> arr = {1,2,3};
    s.buildArray(arr);
}