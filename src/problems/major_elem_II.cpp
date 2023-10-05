#include <vector>
#include <unordered_map>

using namespace std;

// https://leetcode.com/problems/majority-element-ii
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int& num: nums) {
            count[num]++;
        }
        vector<int> res;
        int size = (int) nums.size();
        for(auto [num, cnt]: count) {
            if (cnt > size / 3) res.push_back(num);
        }
        return res;
    }
};
