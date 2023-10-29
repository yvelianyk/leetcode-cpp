#include <vector>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/
class Solution {
public:
#define ll long long

    long long minSum(vector<int> &nums1, vector<int> &nums2) {
        ll sum1 = 0;
        ll zeros1 = 0;
        ll zeros2 = 0;
        ll sum2 = 0;
        for (auto n: nums1) {
            if (n == 0) zeros1++;
            sum1 += n;
        }
        for (auto n: nums2) {
            if (n == 0) zeros2++;
            sum2 += n;
        }
        if (zeros2 == 0 && (sum1 + zeros1) > sum2) return -1;
        if (zeros1 == 0 && (sum2 + zeros2) > sum1) return -1;
        return max(sum1 + zeros1, sum2 + zeros2);
    }
};

int main() {
    Solution s;
//    vector<int> arr1 = {1,2,3,0,0,0,0,0,0,0,0,0,0,0};
//    vector<int> arr2 = {5,5,5,0,0};
    vector<int> arr1 = {2, 0, 2, 0};
    vector<int> arr2 = {1, 4};
    ll res = s.minSum(arr1, arr2);
    cout << res;
}