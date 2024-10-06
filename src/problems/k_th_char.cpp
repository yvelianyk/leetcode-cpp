//
// Created by SV on 06.10.2024.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        vector chars = {'a'};
        while (chars.size() <= k) {
            int size = chars.size();
            for (int i = 0; i < size; i++) {
                char next = chars[i] == 'z' ? 'a' : (char) (chars[i] + 1);
                chars.push_back(next);
            }
        }
        return chars[k - 1];
    }
};

int main() {
    Solution s;
    cout << s.kthCharacter(5) << endl;
}
