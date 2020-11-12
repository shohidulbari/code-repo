#include<bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode *prev, *curr, *rest;
        curr = head;
        
        while(curr){
            rest = curr->next;
            
            prev = dummy;
            while(prev->next && prev->next->val < curr->val) prev = prev->next;
            curr->next = prev->next;
            prev->next = curr;
            
            curr = rest;
        }
        return dummy->next;
    }
};