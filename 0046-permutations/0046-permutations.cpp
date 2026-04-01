class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>res;
         vector<int>ds;
         vector<int>arr(nums.size(),0);
        // for(int i=0;i<nums.size();i++){
        //     arr[i]=0;
        // }
        calculate(res,arr,ds,nums);
        return res;
    }
private:
    void calculate(vector<vector<int>>&res,vector<int>&arr,vector<int>&ds,vector<int>&nums){
        if(ds.size()==nums.size()){
            res.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!arr[i]){
                ds.push_back(nums[i]);
                arr[i]=1;
                calculate(res,arr,ds,nums);
                ds.pop_back();
                arr[i]=0;
            }
        }


    }
};