/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
 */

// @lc code=start
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
    int ans = INT_MIN;
    int maxPathSum(TreeNode* root) {    
        oneSideMax(root);
        return ans;
    }

    int oneSideMax(TreeNode* root) {
        if (root == nullptr) return 0;
        int left_ = max(0, oneSideMax(root->left));
        int right_ = max(0, oneSideMax(root->right));
        ans = max(ans, left_ + right_ + root->val);
        return max(left_, right_) + root->val;
    }
};
// @lc code=end

