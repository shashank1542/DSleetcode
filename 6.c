/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head ->next == NULL){
            return head;
        }
        
        struct ListNode *ptr = head;
        struct ListNode *curr = NULL;
        
        while(ptr!= NULL && ptr ->next !=  NULL){
            struct ListNode *next  = ptr->next;
            ptr ->next = next->next;
            next->next = ptr;
            
            if(curr != NULL){
                curr->next = next;
            }
            if(ptr == head){
                head = next;
            }
            curr = ptr;
            ptr = ptr->next;
            
        }
        return head;
}