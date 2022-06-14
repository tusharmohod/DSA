int helper(Node *root) {
   if (!root) {
      return 0;
   }
   int lst = helper(root->left);
   int rst = helper(root->right);
   if(lst == -1 || rst == -1) {
      return -1;
   }
   if(abs(lst - rst) > 1) {
      return -1;
   }
   return 1 + max(lst, rst);
}

bool isBalancedBT(Node *root) {
   return (helper(root) != -1);
}