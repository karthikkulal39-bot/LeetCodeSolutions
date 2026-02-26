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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constructBST(nums,0,nums.size()-1);
        
    }
    private:
    TreeNode* constructBST(vector<int>&num,int left,int right){
        if(left>right){
            return nullptr;
        }
        int mid=left+(right-left)/2;

        TreeNode* head=new TreeNode(num[mid]);

        head->left=constructBST(num,left,mid-1);
        head->right=constructBST(num,mid+1,right);

    return head;
        
    }

};