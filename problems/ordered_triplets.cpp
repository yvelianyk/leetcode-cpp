#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long res = 0;
        int size = nums.size();
        for (int i = 0; i < size;i++) {
            for (int j = i + 1; j < size;j++) {
                for (int k = j + 1; k < size;k++) {
                    long long l_res = ((long)nums[i] - (long)nums[j]) * (long)nums[k];
                    if (l_res > res) res = (long long)l_res;
                }
            }
        }
        if (res < 0) return 0;
        return res;
    };
};

int main() {
    Solution s;
    vector<int> arr = { 12,6,1,2,7 };
    s.maximumTripletValue(arr);
}