class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=head, *prepre= NULL;
        if(head == NULL) return head;
        for(ListNode* ln = head->next ; ln != NULL ; ln = ln->next){
            pre->next = prepre;
            prepre = pre;
            pre = ln;
        }
        pre->next = prepre;
        return pre;
    }
};