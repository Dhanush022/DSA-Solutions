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
    void flatten(TreeNode* root) {
        flattentree(root);
    }
    TreeNode* flattentree(TreeNode* node){
        if(node==nullptr){
            return nullptr;
        }
        if(node->left==nullptr && node->right==nullptr){
            return node;
        }
        TreeNode* lefttail=flattentree(node->left);
        TreeNode* righttail=flattentree(node->right);
        if(lefttail!=nullptr){
            lefttail->right=node->right;
            node->right=node->left;
            node->left=nullptr;
        }
        return righttail==nullptr?lefttail:righttail;
    }
};
