/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    private:
        void sol(TreeNode *root, vector<string> &ans, string str)
        {
            if (root == NULL)
                return;
            if (root->left || root->right)
                str += (to_string(root->val) + "->");
            else
            {
                str += to_string(root->val);
                ans.push_back(str);
                str = "";
            }
            sol(root->left, ans, str);
            sol(root->right, ans, str);
        }
    public:
        vector<string> binaryTreePaths(TreeNode *root)
        {
            string str = "";
            vector<string> ans;
            sol(root, ans, str);
            return ans;
        }
};
