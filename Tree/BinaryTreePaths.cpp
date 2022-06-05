void myFunc(vector<string> &res, string output, TreeNode *root) {
    if(!root) return;
    if(!root->left && !root->right) {
        output += to_string(root->val);
        res.push_back(output);
        return;
    }
    output += to_string(root->val);
    output += "->";
    myFunc(res, output, root->left);
    myFunc(res, output, root->right);
}
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> res;
    myFunc(res, "", root);
    return res;
}