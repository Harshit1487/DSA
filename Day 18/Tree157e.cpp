//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/


class Solution {
public:
    TreeNode* binary(int l ,int r, vector<int>& nums){
        if(l>r) return NULL;
        int m = (l+r)/2;
        TreeNode* root = new TreeNode(nums[m]);
        root->left = binary(l, m-1, nums);
        root->right = binary(m+1, r, nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return binary(0, nums.size()-1, nums);
    }
};
