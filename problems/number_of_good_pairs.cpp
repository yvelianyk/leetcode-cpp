#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/number-of-good-pairs/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int size = (int) nums.size();
        int res = 0;
        for (int i = 0;i<size;i++) {
            for (int j = i + 1;j<size;j++) {
                if (nums[i] == nums[j]) res++;
            }
        }

        return res;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,3,1,1,3};
    cout << s.numIdenticalPairs(arr);
}