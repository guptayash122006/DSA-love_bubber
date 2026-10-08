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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* slow = dummy;
        ListNode* fast = dummy;

        // slow ko left ke previous node par le jao
        for(int i = 1; i < left; i++) {
            slow = slow->next;
        }

        // fast ko right wale node par le jao
        for(int i = 0; i < right; i++) {
            fast = fast->next;
        }

        ListNode* leftNode = slow->next;
        ListNode* afterRight = fast->next;

        // Reverse
        ListNode* prev = afterRight;
        ListNode* curr = leftNode;

        while(curr != afterRight) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // left ke previous ko reversed part ke head se connect
        slow->next = prev;

        return dummy->next;
    }
};