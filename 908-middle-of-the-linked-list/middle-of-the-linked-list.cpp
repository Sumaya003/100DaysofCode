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
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head -> next;
        ListNode* second = head;
        while(first!=NULL){
            first = first -> next ;
            if(first  != NULL){
                first = first -> next;
            }
            second = second -> next;
        }
        return second;
    }
};