//
// Created by SV on 26.09.2024.
// https://leetcode.com/problems/report-spam-message/

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;


class Solution {
public:
    bool reportSpam(vector<string> &message, vector<string> &bannedWords) {
        unordered_set<string> spam_set;
        for (int i = 0; i < bannedWords.size(); i++) {
            spam_set.insert(bannedWords[i]);
        }
        int count = 0;
        for (int i = 0; i < message.size(); i++) {
            if (spam_set.count(message[i]) > 0) count++;
            if (count >= 2) return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<string> arr = {"hello","world","leetcode"};
    vector<string> banned = {"world","leetcode"};
    cout << s.reportSpam(arr, banned) << endl;
}