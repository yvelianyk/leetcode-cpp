#include "list_node.h"

// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/
class Solution {
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head) {
        ListNode *curr = head -> next;
        ListNode *prev = head;
        while (curr != nullptr) {
                int div = gcd(curr->val, prev ->val);
                ListNode* gcd_node = new ListNode(div);
                prev -> next = gcd_node;
                gcd_node -> next = curr;
                prev = curr;
                curr = curr -> next;
        }
        return head;
    }

private:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
