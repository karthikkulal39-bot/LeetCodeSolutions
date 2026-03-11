class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        solve(ans,ds,nums,0);
        return ans;
    }
private:
    void solve(vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,int index){
        ans.push_back(ds);
        for(int i=index;i<nums.size();i++){
            if(i!=index && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(ans,ds,nums,i+1);
            ds.pop_back();
        }
    }
};