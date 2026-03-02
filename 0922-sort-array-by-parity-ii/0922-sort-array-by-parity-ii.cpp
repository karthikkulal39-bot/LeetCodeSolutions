class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n =nums.size();
        int evenPos=0,oddPos=1;
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                res[evenPos]=nums[i];
                evenPos+=2;
            }
            else{
                res[oddPos]=nums[i];
                oddPos+=2;
            }
        }
        return res;
    }
};