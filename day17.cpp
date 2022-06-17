
class Solution{
    public:
    int ans = 0;

    int dfs(TreeNode* node) {
        if (!node) return 0;
        int val = dfs(node->left) + dfs(node->right);
        if (val == 0) return 3;
        if (val < 3) return 0;
        ans++;
        return 1;
    }
    
    int minCameraCover(TreeNode* root) {
        return dfs(root) > 2 ? ans + 1 : ans;
    }
};
