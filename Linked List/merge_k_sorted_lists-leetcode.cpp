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
struct compare{
    bool operator()(ListNode* a,ListNode* b)
    {
        return a->val>b->val;
    }
};
class Solution {
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <ListNode*, vector<ListNode*>,compare > pq;
        for(auto it:lists)
        {
            if(it)
            pq.push(it);
        }
        ListNode* dummy=new ListNode(0);
        ListNode* last=dummy;
        while(!pq.empty())
        {
            ListNode* temp=pq.top();
            pq.pop();
            last->next=temp;
            last=last->next;
            if(temp->next)
                pq.push(temp->next);
        }
        return dummy->next;
    }
};