#include <vector>
#include <queue>
#include <climits>
#include "tree_node.h"

using namespace std;

// https://leetcode.com/problems/find-largest-value-in-each-tree-row
class Solution {
public:
    vector<int> largestValues(TreeNode *root) {
        vector<int> res;
        queue<TreeNode *> q;
        if (root) q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int max = INT_MIN;
            for (int i = 0; i < size; i++) {
                TreeNode *curr = q.front();
                q.pop();
                if (curr->val > max) max = curr->val;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            res.push_back(max);
        }

        return res;
    }
};
