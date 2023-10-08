#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// https://leetcode.com/problems/minimum-processing-time/description/
class Solution {
public:
    int minProcessingTime(vector<int> &processorTime, vector<int> &tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end(), [](int a, int b) {
            return a > b;
        });
        int res = 0;
        int proc_size = processorTime.size();
        int count = 0;
        for (int i = 0; i < proc_size; i++) {
            int proc_time = processorTime[i];
            int local_max = 0;
            for (int j = count; j < count + 4; j++) {
                if ((tasks[j] + proc_time) > local_max) {
                    local_max = tasks[j] + proc_time;
                }
            }
            count += 4;
            if (local_max > res) res = local_max;
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> p_time = {8, 10};
    vector<int> tasks = {2, 2, 3, 1, 8, 7, 4, 5};
    int res = s.minProcessingTime(p_time, tasks);
    cout << res;
}