/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void travel(TreeNode* root, vector<int>& resp){
        if(root == nullptr) return;
        stack<TreeNode*> TreeStack;
        TreeStack.push(root);
        
        while(!TreeStack.empty()){
            TreeNode* node = TreeStack.top();
            TreeStack.pop();
            resp.push_back(node->val);
            
            if(node->right) TreeStack.push(node->right);
            if(node->left) TreeStack.push(node->left);
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> resp;
        travel(root, resp);
        return resp;
    }
};