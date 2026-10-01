/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    private:
        void solve(ListNode* list1 , ListNode* list2) {
            if(list1 -> next == NULL) {
                list1 -> next = list2 ;
                return ;
            }

            ListNode* curr1 = list1 ;
            ListNode* next1 = curr1 -> next ;
            ListNode* curr2 = list2 ;
            ListNode* next2 = NULL ;

            while(next1 != NULL && curr2 != NULL) {
            if((curr1 -> val <= curr2 -> val) && next1 -> val > curr2 -> val  ) {
                // save next node of second list
                next2 = curr2 -> next ; 
                // insert curr2 in between current1 and next1
                curr1 -> next = curr2 ;
                curr2 -> next = next1 ;

                curr1 = curr2 ;
                curr2 = next2 ;
            }
            else{
                // move forward in first list 
                curr1 = next1 ;
                next1 = next1 -> next ;

                // reach end of first list
                if(next1 == NULL) {
                    curr1 -> next = curr2 ;
                }
            }
            }
        }
    public :
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) {
            return list2 ;
        }
        if(list2 == NULL){
            return list1 ;
        }

        if(list1-> val <= list2-> val) {
            solve(list1 , list2) ;
            return list1 ;
        }
        else{
            solve(list2 , list1) ;
            return list2 ;
        }
    }
};