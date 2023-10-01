#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int n : nums) {
            counter[n]++;
        }
        int res = 0;
        for (auto [_, n] : counter) {
            if (n == 1) return -1;
            if (n % 3 == 0) {
                res += n / 3;
            }
            else {
                res += n / 3 + 1;
            }
        }

        return res;
    }
};

int main() {
    Solution s;
    vector<int> arr = { 14,12,14,14,12,14,14,12,12,12,12,14,14,12,14,14,14,12,12 };
    s.minOperations(arr);
}