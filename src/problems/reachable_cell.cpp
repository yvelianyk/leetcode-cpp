#include <queue>
#include <unordered_set>
#include <string>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time

// first try - using BFS and got TLE
//class Solution {
//private:
//    vector<vector<int>> dirs = {
//            {1,  0},
//            {0,  1},
//            {1,  1},
//            {-1, 0},
//            {0,  -1},
//            {-1, -1},
//            {1,  -1},
//            {-1, 1},
//    };
//
//    string get_key(int i, int j) {
//        return to_string(i) + to_string(j);
//    }
//
//public:
//    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
//        if (sx == fx && sy == fy)
//            return t != 1;
//
//        queue<pair<int, int>> q;
//        unordered_set<string> visited;
//        q.emplace(sx, sy);
//        visited.insert(get_key(sx, sy));
//        int time = 0;
//
//        while (!q.empty() && time <= t) {
//            int size = q.size();
//            for (int i = 0; i < size; i++) {
//                pair<int, int> curr = q.front();
//                q.pop();
//                if (curr.first == fx && curr.second == fy && time <= t) {
//                    return true;
//                }
//                for (auto &dir: dirs) {
//                    pair<int, int> new_coord = make_pair(curr.first + dir[0], curr.second + dir[1]);
//                    if (!visited.count(get_key(new_coord.first, new_coord.second))) {
//                        q.push(new_coord);
//                    }
//                }
//            }
//            time++;
//        }
//        return false;
//    }
//};


// second try - just Math
class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if (sx == fx && sy == fy) return t != 1;
        return (max(abs(sx - fx), abs(sy - fy)) <= t);
    }
};

int main() {
    Solution s;
    bool res = s.isReachableAtTime(2, 4, 7, 7, 6);
    cout << res;
}