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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
            return head;
        }
        
        ListNode* curr = head;
        int len = 1;
        while(curr->next){
            curr = curr->next;
            len++;
        }

        if(k%len == 0){
            return head;
        }

        k = k%len;
        int stepsToNewHead = len - k;
        
        curr->next=head;
        ListNode* tail = head;
        for (int i = 0; i < stepsToNewHead - 1; i++) { 
          tail = tail->next;
         }
        head = tail->next;
        tail->next = NULL;

        return head;
    }
};