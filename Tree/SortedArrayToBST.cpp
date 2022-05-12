TreeNode* BST(vector<int> &arr, int l, int r) {
    if(l > r) {
        return NULL;
    }
    int m = (l + r) >> 1;
    TreeNode *root = new TreeNode(arr[m]);
    root->left = BST(arr, l, m - 1);
    root->right = BST(arr, m + 1, r);
    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return BST(nums, 0, nums.size() - 1);
}