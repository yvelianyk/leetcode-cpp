#include <iostream>
#include <vector>

using namespace std;

//  https://leetcode.com/problems/concatenation-of-array/description/

// create new copy of vector
// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         vector<int> res;
//         int size = nums.size();
//         for (int i = 0; i < size * 2; i++) {
//             res.push_back(nums[i % size]);
//         }
        
//         return res;
//     }
// };

// in place algorithm:
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        nums.resize(size * 2);
        for (int i = 0; i < size ; i++) {
            nums[i + size] = nums[i];
        }
        
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> array = {1,2,3,4};
    vector<int> res = s.getConcatenation(array);
    cout << "";
}