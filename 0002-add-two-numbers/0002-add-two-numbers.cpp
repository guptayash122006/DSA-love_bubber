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
private:

    void insertAtTail(ListNode* &head, ListNode* &tail, int val) {

        ListNode* temp = new ListNode(val);

        // empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
    }

    ListNode* add(ListNode* first, ListNode* second) {

        int carry = 0;

        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        while(first != NULL || second != NULL || carry != 0) {

            int sum = carry;

            if(first != NULL) {
                sum = sum + first->val;
                first = first->next;
            }

            if(second != NULL) {
                sum = sum + second->val;
                second = second->next;
            }

            int digit = sum % 10;

            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
        }

        return ansHead;
    }

public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        return add(l1, l2);
    }
};