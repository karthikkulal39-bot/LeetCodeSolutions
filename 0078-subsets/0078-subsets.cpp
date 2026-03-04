class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>res;
        vector<vector<int>>ms;
        helper(nums,0,res,ms);
        return ms;
        
     }
     private:
        void helper(vector<int>&nums,int index,vector<int>&res,vector<vector<int>>&ms){
            if(index>=nums.size()){
                ms.push_back(res);
                return;
            }
            res.push_back(nums[index]);
            helper(nums,index+1,res,ms);
            res.pop_back();
            helper(nums,index+1,res,ms);
        
          return;
        }
        
    
};