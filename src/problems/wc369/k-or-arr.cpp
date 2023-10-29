#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int findKOr(vector<int> &nums, int k) {
        int res = 0;
        int sh = 1;
        for (int i = 0; i < 32; i++) {
            int count = 0;
            for (int &n: nums) {
                if (n & sh) count++;
            }
            if (count >= k)
                res += pow(2, i);

            sh = sh << 1;
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {7, 12, 9, 8, 9, 15};
    int res = s.findKOr(nums, 4);
    cout << res;
}