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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head -> next == nullptr){
            return head;
        }
        vector<ListNode*>nodes;
        ListNode* curr = head;
        while(curr != nullptr){
            nodes.push_back(curr);
            curr= curr -> next;
        }
        int n = nodes.size();
        for(int i =0;i<n-1;i += 2){
            swap(nodes[i],nodes[i+1]);
        }
        for(int i=0;i<n-1;i++){
            nodes[i]->next = nodes[i+1];
        }
        nodes[n -1] -> next = nullptr;
        return nodes[0];
        
    }
};