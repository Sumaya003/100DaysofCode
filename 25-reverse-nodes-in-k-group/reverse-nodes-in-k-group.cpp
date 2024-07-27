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
    int getLen(ListNode* head){
        int cnt = 0;
        ListNode* temmp = head;
        while(temmp!=NULL){
            temmp = temmp -> next;
            cnt++;
        }
        return cnt;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        if(getLen(head) < k){
            return head;
        }


        ListNode* next = NULL;
        ListNode* prev = NULL;
        ListNode* curr = head;
        int count = 0;
        while(curr!=NULL && count<k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(next!=NULL){
            head -> next = reverseKGroup(next,k);
        }
        return prev;
    }
};