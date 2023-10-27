#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
class Solution {
public:
    vector<int> findIndices(vector<int> &nums, int indexDifference, int valueDifference) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                bool is_val_fit = abs(nums[i] - nums[j]) >= valueDifference;
                bool is_ind_fit = abs(i - j) >= indexDifference;
                if (is_val_fit && is_ind_fit) return {i, j};
            }
        }
        return {-1, -1};
    }
};

int main() {
    Solution s;
    vector<int> arr = {5, 1, 4, 1};
    vector<int> res = s.findIndices(arr, 2, 4);
    cout << "";
}
