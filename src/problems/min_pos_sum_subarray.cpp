#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int res = INT_MAX;
        for (int j = 0;j <= nums.size() - r;j++) {
            for (int k = l;k <= r;k++) {
                int sum = 0;
                for (int i = j;i<j+k;i++) {
                    sum += nums[i];
                }
                if (sum > 0) {
                    res = min(sum, res);
                }
            }
        }
        return res == INT_MAX ? -1: res;
    }
};

int main() {
    vector nums = {3,-2,1,4};
    Solution s;
    int res = s.minimumSumSubarray(nums, 2,3);
    cout << res << endl;
}
