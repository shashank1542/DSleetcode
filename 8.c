/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
       if(head == NULL || head->next == NULL )
        	return head;

        struct ListNode *temp = head;
        int len=0;
        while(temp != NULL){
        	len++;
        	temp=temp->next;
        }
        temp = head;
        len = len/2;
        while(len>0){
            temp = temp->next;
            len--;
        }
        return temp;
}