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
    void reorderList(ListNode* head) {
        if( !head ) return;
        ListNode *temp = head;
        vector<ListNode*> a;
        while( temp ){
            a.push_back(temp);
            temp = temp->next;
        }
        int l = 0;
        int r = a.size()-1;
        while( l<r){
            a[l]->next = a[r];
            l++;
            if( l == r) break;
            a[r]->next = a[l];
            r--;
        }
        a[l]->next = NULL;
        
    }
};
