#include <iostream>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = start;
        for (int i = 1;i < n;i++) {
            result ^= start + 2 * i; 
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.xorOperation(5, 0) << std::endl;
    cout << "The answer should be 8" << std::endl;
}