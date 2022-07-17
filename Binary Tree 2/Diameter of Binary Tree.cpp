
class Solution
{
    int maxi = INT_MIN;
    int find(TreeNode *curr)
    {
        if (curr == NULL)
            return NULL;
        int left = find(curr->left);
        int right = find(curr->right);

        return 1 + max(left, right);
    }
    public:

        int diameterOfBinaryTree(TreeNode *root)
        {
            if (root == NULL)
                return 0;
            int left = find(root->left);
            int right = find(root->right);
            maxi = max(maxi, left + right);
            diameterOfBinaryTree(root->left);
            diameterOfBinaryTree(root->right);
            return maxi;
        }
};
