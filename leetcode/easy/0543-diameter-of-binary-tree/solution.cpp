class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

    int height(TreeNode* root, int& diameter) {
        if (root == nullptr)
            return 0;

        int lheight = height(root->left, diameter);
        int rheight = height(root->right, diameter);

        diameter = max(diameter, lheight + rheight);

        return 1 + max(lheight, rheight);
    }
};