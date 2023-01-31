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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> S;
        if(root){
            S.push(root);
            while(!S.empty()){
                TreeNode* temp=S.top();
                ans.push_back(temp->val);
                if(temp->left){
                    S.pop();
                    if(temp->right){
                        S.push(temp->right);
                    }
                    S.push(temp->left);
                    temp->left=NULL;
                }
                else if(temp->right){
                    S.pop();
                    S.push(temp->right);
                    temp->right=NULL;
                }
                else{
                    S.pop();
                }
            }
            
        }
        return ans;
    }
};
