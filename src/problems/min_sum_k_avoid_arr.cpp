#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int minimumSum(int n, int k) {
        int res = 0, count = 0, i = 1;
        unordered_set<int> set;
        while(count < n) {
            if (set.count(k - i)) {
                i++;
                continue;
            }
            set.insert(i);
            res += i++;
            count++;
        }

        return res;
    }
};

int main() {
    Solution s;
    cout << s.minimumSum(5,4);
    cout << s.minimumSum(2,6);
    cout << s.minimumSum(10,8);
}