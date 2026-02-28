class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minPrice=INT_MAX;
      int totalProfit=0;
      for(int nums:prices){
        if(nums<minPrice){
            minPrice=nums;
        }else if(nums-minPrice>totalProfit){
            totalProfit=nums-minPrice;
        }
       
      }
    
    return totalProfit;
    }
};