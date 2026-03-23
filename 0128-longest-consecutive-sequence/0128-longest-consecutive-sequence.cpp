class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int lastmin=INT_MIN;
        int cnt=0;
        int longest=0;
        for(int i=0;i<=n;i++){
            if(nums[i]-1==lastmin){
                lastmin=nums[i];
                cnt+=1;
            }
            else if(nums[i]!=lastmin){
                cnt=1;
                lastmin=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;

        
    }
};