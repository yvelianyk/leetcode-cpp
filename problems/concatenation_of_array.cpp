#include <iostream>
#include <vector>

using namespace std;

//  https://leetcode.com/problems/concatenation-of-array/description/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        int size = nums.size();
        for (int i = 0; i < size * 2; i++) {
            res.push_back(nums[i % size]);
        }
        
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> array = {1,2,3,4};
    vector<int> res = s.getConcatenation(array);
}