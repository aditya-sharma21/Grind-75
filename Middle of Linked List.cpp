class Solution {
public:
    int countNode(ListNode* head){
        if(!head) return 0;
        int count = 0;
        while(head){
            ++count;
            head = head->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* cur = head;
        int count = countNode(cur);
        int i = 0;
        while(i < count/2){
            head = head->next;
            ++i;
        }
        return head;
    }
};
