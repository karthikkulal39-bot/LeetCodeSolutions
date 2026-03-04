class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>res;
        vector<vector<int>>ms;
         vector<vector<int>>m;
        helper(nums,0,res,ms);
        return ms;
        
     }
     private:
        vector<vector<int>> helper(vector<int>&nums,int index,vector<int>&res,vector<vector<int>>&ms){
            if(index>=nums.size()){
                ms.push_back(res);
                return ms;
            }
            res.push_back(nums[index]);
            helper(nums,index+1,res,ms);
            res.pop_back();
            helper(nums,index+1,res,ms);
           return ms;
        }
        
    
};