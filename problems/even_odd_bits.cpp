#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int counter = 0;
        int even = 0;
        int odd = 0;
        int pos = static_cast<int>(log2(n));
        
        while (pos >= 0) {
            int bit = 1 << pos;
            if ((n & bit) == bit) {
                if (counter % 2 == 0) even++;
                if (counter % 2 != 0) odd++;
            }
            pos--;
            counter++;
        }
        return counter % 2 == 0 ?
            vector<int> {odd, even} :
            vector<int> {even, odd};
    }
};

int main() {
    Solution s;
    vector<int> res = s.evenOddBit(2);
    cout << "Success: {" << res[0] << ", " << res[1] << "};";

}