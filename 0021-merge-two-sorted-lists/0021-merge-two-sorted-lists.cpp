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

class ll{
public:
    ListNode* list3;
    ll(){
        list3 = NULL;
    }
    void insert(int val){
        ListNode* newl = new ListNode(val);
        if(list3 == NULL){
            list3 = newl;
        }
        else{
            ListNode* p = list3;
            while(p->next != NULL){
                p = p->next;
            }
            p->next = newl;
        }
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ll x;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                x.insert(list1->val);
                list1 = list1->next;
            }
            else{
                x.insert(list2->val);
                list2 = list2->next;
            }
        }
        if(list1 != nullptr){
            while(list1 != NULL){
                x.insert(list1->val);
                list1 = list1->next;
            }
        }
        if(list2 != nullptr){
            while(list2 != NULL){
                x.insert(list2->val);
                list2 = list2->next;
            }
        }

        return x.list3;
    }
};