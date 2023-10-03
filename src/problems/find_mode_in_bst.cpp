#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include "lib/tree_node.h"

using namespace std;

class Solution {
    public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> count_map;
        traverse(root, count_map);
        int max_value = INT_MIN;
        vector <int> result;
        for (auto entry: count_map) {
            if (max_value < entry.second) {
                max_value = entry.second;
            }
        }

        for (auto entry: count_map) {
            if (entry.second == max_value) {
                result.push_back(entry.first);
            }
        }
        return result;
    }

    private:
    void traverse(TreeNode* node, unordered_map<int,int>& count_map) {
        if (node == NULL) return;
        count_map[node -> val]++;
        traverse(node -> left, count_map);
        traverse(node -> right, count_map);
    }
};


int main()
{
    Solution s;

}