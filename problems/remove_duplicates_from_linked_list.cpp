#include <iostream>
#include <vector>
#include "lib/list_node.h"

using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node = head;
        ListNode* prev = nullptr;
        while (node != nullptr) {
            if (prev == NULL) { 
                prev = node;
                node = node -> next;
                continue;
            }

            if (prev -> val == node -> val) {
                prev -> next = node -> next;
            } else {
                prev = node;
            }

            node = node -> next;
        }
        
        return head;
    }
};

int main()
{
    Solution s;
    ListNode head = ListNode(1);
    ListNode next = ListNode(1);
    ListNode next2 = ListNode(2);
    ListNode next3 = ListNode(3);
    ListNode next4 = ListNode(3);

    head.next = &next;
    next.next = &next2;
    next2.next = &next3;
    next3.next = &next4;
    s.deleteDuplicates(&head);
    cout << "Head should be 1 -> 2 -> 3";

}