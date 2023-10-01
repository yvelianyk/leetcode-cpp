#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> v;
        int size = nums.size();

        for (int i = size - 1; i >= 0; i--) {
            if (nums[i] <= k) {
                v.insert(nums[i]);
            }

            if (v.size() == k) {
                return size - i;
            }
        }

        return size;
    }
};

int main() {
    Solution s;
    vector<int> arr = { 3, 1, 5, 4, 2 };
    cout << s.minOperations(arr, 2);
}