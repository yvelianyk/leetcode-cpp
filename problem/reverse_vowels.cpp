#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    public:
    string reverseVowels(string s) {
        unordered_set<char> set = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        vector<char> list_of_vowels;

        for (char& c : s) {
            if (set.count(c) == 1) {
                list_of_vowels.push_back(c);
            }
        }
        for (char& c : s) {
            if (set.count(c) == 1) {
                c = list_of_vowels.back();
                list_of_vowels.pop_back();
            }
        }

        return s;
    }
};


int main()
{
    Solution s;
    string str = "leetcode";
    cout << str << " before\n";
    cout << "result: " << s.reverseVowels(str) << " \n";
    cout << str << " after\n";

}