/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL){
        return NULL;
    }
    struct ListNode * curr = head;

    while(curr!=NULL){
        if(curr->next != NULL && curr->val == curr->next->val){
            struct ListNode* next = curr->next->next;
            struct ListNode*NodetoDelete = curr->next;
            free(NodetoDelete);
            curr->next = next;
        }else{
            curr= curr->next;
        }

    }
    return head;
}