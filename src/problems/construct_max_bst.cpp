#include "tree_node.h"
#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/maximum-binary-tree/
class Solution {
public:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        arr = &nums;
        return traverse(0, nums.size() - 1);
    }

private:
    vector<int> *arr;

    TreeNode *traverse(int i, int j) {
        if (i > j) return nullptr;
        int max = get_max(i, j);
        auto *node = new TreeNode((*arr)[max]);
        node->left = traverse(i, max - 1);
        node->right = traverse(max + 1, j);
        return node;
    }

    int get_max(int i, int j) {
        int max = -1;
        int index = -1;
        for (int k = i; k <= j; k++) {
            if ((*arr)[k] > max) {
                index = k;
                max = (*arr)[k];
            }
        }
        return index;
    }
};

int main() {
    Solution s{};
    vector<int> nums = {3, 2, 1, 6, 0, 5};
    TreeNode *node = s.constructMaximumBinaryTree(nums);
    cout << "success: " << node -> val << std::endl;
}