#include "list_node.h"

// https://leetcode.com/problems/merge-nodes-in-between-zeros/
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* node = head -> next;
        auto result = ListNode(-1);
        ListNode* result_node = &result;
        int cur_sum=0;
        while (node != nullptr) {
            if (node -> val == 0) {
                auto* new_node = new ListNode(cur_sum);
                result_node -> next = new_node;
                result_node = result_node -> next;
                cur_sum = 0;
            } else {
                cur_sum += node -> val;
            }
            node = node->next;
        }
        return result.next;
    }
};

int main () {
    ListNode head = ListNode(0);
    ListNode next = ListNode(1);
    ListNode next2 = ListNode(2);
    ListNode next3 = ListNode(0);
    ListNode next4 = ListNode(3);
    ListNode next5 = ListNode(0);

    head.next = &next;
    next.next = &next2;
    next2.next = &next3;
    next3.next = &next4;
    next4.next = &next5;
    Solution s;
    s.mergeNodes(&head);

}