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
    ListNode* reverse(ListNode* head){
        ListNode *cur = head, *prev = NULL, *next = NULL;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* f, ListNode* s) {
        ListNode* result = new ListNode(0);
        ListNode* ans = result;
        int carry = 0;
        while(f != NULL || s != NULL || carry){
            int x = 0;
            if(f){
                x += f->val;
                f = f->next;
            }
            if(s){
                x += s->val;
                s = s->next;
            }
            x += carry;
            ListNode* tem = new ListNode(x%10);
            ans->next = tem;
            ans = ans->next;
            carry = x/10;
        }
        return result->next;
    }
};