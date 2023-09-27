#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size = nums.size();
        vector<int> left(size, 0);
        vector<int> right(size, 0);
        vector<int> res(size,0);
        for (int i = 1;i < size;i++) {
            left[i] = left[i-1] + nums[i-1];
            right[size-i-1]=right[size-i]+nums[size-i];
        }
        for (int i = 0;i < size;i++) {
            res[i]=abs(left[i]-right[i]);
        }

        
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {10,4,8,3};
    s.leftRightDifference(nums);
}