// list_node.h

#ifndef LIST_NODE_H // Include guard to prevent multiple inclusions
#define LIST_NODE_H

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif // LIST_NODE_H


