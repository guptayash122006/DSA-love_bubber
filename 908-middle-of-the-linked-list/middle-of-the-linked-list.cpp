class Solution {
private:
    ListNode* getMiddle(ListNode* &head) {
        
        // Base condition
        if(head == NULL || head->next == NULL) {
            return head;
        }

        if(head->next->next == NULL) {
            return head->next;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL) {
            fast = fast->next;

            if(fast != NULL) {
                fast = fast->next;
            }
            slow = slow -> next ;
        }

        return slow;
    }

    int getLength(ListNode* head) {
        int len = 0;

        while(head != NULL) {
            len++;
            head = head->next;
        }

        return len;
    }

public:
    ListNode* middleNode(ListNode* head) {
        return getMiddle(head);
    }
};