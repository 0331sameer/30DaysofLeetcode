/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* p = head;
        vector<ListNode *> q;
        while(p != NULL){
            for(int i = 0; i < q.size(); i++){
                if(p == q[i]){
                    return true;
                }
            }
            q.push_back(p);
            p = p->next;
        }
        return false;
    }
};