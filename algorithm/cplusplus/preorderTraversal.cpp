#include<bits/stdc++.h>

using namespace std;

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void travel(TreeNode* root, vector<int>& resp){
        if(root == nullptr) return;
        resp.push_back(root->val);
        travel(root->left, resp);
        travel(root->right, resp);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> resp;
        travel(root, resp);
        return resp;
    }
};