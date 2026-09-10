class Solution {
public:
    int ans = 0;

    pair<int,int> traverse(TreeNode* root) {
        if(root == nullptr){
            return {0, 0};
        }

        pair<int,int> left = traverse(root->left);
        pair<int,int> right = traverse(root->right);

        int sum = left.first + right.first + root->val;
        int cnt = left.second + right.second + 1;

        int avg = sum / cnt;

        if(root->val == avg){
            ans++;
        }

        return {sum, cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        traverse(root);
        return ans;
    }
};