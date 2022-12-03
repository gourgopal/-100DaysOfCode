//2095. Delete the Middle Node of a Linked List
//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if (head -> next == nullptr) {
            return nullptr;
        }
        
        ListNode* p1 = head;
        int length = 0;
        while (p1 != nullptr) {
            ++length;
            p1 = p1 -> next;
        }
        
        ListNode* p2 = head;
        int mid = length / 2;
        for (int i = 0; i < mid - 1; ++i) {
            p2 = p2 -> next;
        }
        p2 -> next = p2 -> next -> next;
        return head;
    }
};
