#include "tree_node.h"

// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/
class Solution {
public:
    TreeNode *bstToGst(TreeNode *root) {
        int sum = 0;
        traverse(root, sum);

        return root;
    }

private:
    void traverse(TreeNode *node, int &sum) {
        if (node == nullptr) return;
        traverse(node->right, sum);
        int curr = node->val;
        node->val += sum;
        sum += curr;
        traverse(node->left, sum);
    };
};

int main() {
    auto head = TreeNode(4);
    auto node1 = TreeNode(1);
    auto node6 = TreeNode(6);
    auto node0 = TreeNode(0);
    auto node2 = TreeNode(2);
    auto node3 = TreeNode(3);
    auto node66 = TreeNode(6);
    auto node5 = TreeNode(5);
    auto node7 = TreeNode(7);
    auto node8 = TreeNode(8);

    head.left = &node1;
    head.right = &node6;
    node1.left = &node0;
    node1.right = &node2;
    node2.right = &node3;
    node66.left = &node5;
    node66.right = &node7;
    node7.right = &node8;

    Solution s;
    auto res = s.bstToGst(&head);
}