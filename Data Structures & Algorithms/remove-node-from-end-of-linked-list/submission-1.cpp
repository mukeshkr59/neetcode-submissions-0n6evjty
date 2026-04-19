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
        ListNode *temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        if( cnt == n ) return head->next;
        if( n == 1){
            ListNode * node = head;
            while( node->next->next ){
                node = node->next;
            }
            delete node->next;
            node->next = nullptr;
            return head;
        }

        int x = cnt-n;
        cnt = 0;
        temp = head;
        while(temp){
            cnt++;
            if(cnt == x){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }
        
        return head;   
    }
};
