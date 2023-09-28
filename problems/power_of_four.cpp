#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n > 0 && ((n & (n - 1)) == 0)) {
            return (n & 0b10101010101010101010101010101010); 
        }
        return false;
    }
};

int main() {
    Solution s;
    int param = 16;
    cout << "Is " << param << " power of four?" << std::endl;
    cout << s.isPowerOfFour(16) << std::endl;
    cout << "should be true" << std::endl;
    cin.get();
    return 0;
}