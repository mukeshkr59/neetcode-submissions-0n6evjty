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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ans = new ListNode(0, head);
        ListNode *temp = head;
        while(n){
            temp = temp->next;
            n--;
        }
        ListNode *curr = ans;
        while(temp){
            temp = temp->next;
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return ans->next;
    }
};
