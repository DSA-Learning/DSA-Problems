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
* DFS Solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        
        return 1+max(left,right);
    }
};

* BFS Solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode *>q;
        q.push(root);
        int c=0;
        while(q.empty()==false)
        {
            int size=q.size();
            c++;
            while(size--)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
        }
        return c;
    }
};
