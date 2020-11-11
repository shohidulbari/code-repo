#include<bits/stdc++.h>

using namespace std;

struct node{
    int val;
    node* next;
    node(){
        val = 0;
        next = nullptr;
    };
    node(int v){
        val = v;
        next = nullptr;
    };
};

class Solution{
    public:
        void insert(node* head, int val){
            while(head->next){
                head = head->next;
            }
            node* newNode = new node(val);
            head->next = newNode;
        }
};

int main(){
    Solution solve;
    node* head = new node();

    for(int i=0; i<20; i++){
        solve.insert(head, i);
    }

    while(head){
        cout<<head->val<<endl;
        head = head->next;
    }

    return 0;
}