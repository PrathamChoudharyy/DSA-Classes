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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root)
        {
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                int a=q.size();
                vector<int> temp;
                while(a)
                {
                    TreeNode* begin = q.front();
                    q.pop();
                    temp.push_back(begin->val);
                    if(begin->left)     q.push(begin->left);
                    if(begin->right)    q.push(begin->right);
                    a--;
                }
                result.push_back(temp);
            }
        }
        return result;
    }
};
