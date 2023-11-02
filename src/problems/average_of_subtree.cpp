
#include "tree_node.h"
#include <utility>

using namespace std;

// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
class Solution {
private:
    int res = 0;

    pair<int, int> traverse(TreeNode *node) {
        if (node == nullptr) return make_pair(0, 0);
        pair<int, int> left = traverse(node->left);
        pair<int, int> right = traverse(node->right);
        int count = left.first + right.first + 1;
        int total = node->val + left.second + right.second;
        if (total / count == node->val) res++;
        return make_pair(count, total);
    }

public:
    int averageOfSubtree(TreeNode *root) {
        traverse(root);
        return res;
    }
};

int main() {
    auto head = TreeNode(4);

    auto node8 = TreeNode(8);
    auto node5 = TreeNode(5);

    auto node0 = TreeNode(0);
    auto node1 = TreeNode(1);

    auto node6 = TreeNode(6);

    head.left = &node8;
    head.right = &node5;
    node8.right = &node0;
    node8.left = &node1;

    node5.left = &node6;

    Solution s;
    s.averageOfSubtree(&head);

}