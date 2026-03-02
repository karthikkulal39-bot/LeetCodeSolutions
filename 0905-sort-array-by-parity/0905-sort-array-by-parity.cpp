class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int right=0,left=0;

       while(left<nums.size()){
        if(nums[left]%2==0){
            swap(nums[left],nums[right]);
            right++;
            left++;
        }else{
            left++;
        }
       } 
       return nums;
    }
};