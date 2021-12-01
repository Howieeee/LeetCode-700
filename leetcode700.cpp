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
    TreeNode* ans = new TreeNode(-1);
    void search(TreeNode* node, int val){
       
        if(node == NULL){
            //cout << "node is null\n";
             return;
        }
        if(node->val == val){
            ans = node;
            //cout << "node = val\n";
            return;
        } 
        //cout << node->val << endl;
        
        if(node->left && ans->val == -1 )
            search(node->left,val);
        if(node->right && ans->val == -1)
            search(node->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        //TreeNode* ans = new TreeNode(-1);
        search(root,val);
        
        if(ans->val != -1)
            return ans;
        else
            return NULL;
        return NULL;
    }
};
