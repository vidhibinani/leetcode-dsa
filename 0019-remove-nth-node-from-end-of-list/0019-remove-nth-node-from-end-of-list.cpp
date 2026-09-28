class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr) return {};
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        if (n == count) {
            ListNode* newHead = head;
            head= head->next;
            delete newHead;
            return head;
        }
        int pos= count-n+1;
        temp = head; 
        for (int i = 1; i < pos-1; i++) {
            temp = temp->next;
        }

        ListNode* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;

        return head;
    }
};