class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ele;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count++;
                ele=nums[i];

            }
            else if(ele==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return ele;
    //     int s=nums.size()/2;
    //     unordered_map<int,int>mp;
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto &p : mp){
    //         if(p.second>s){
    //             return p.first;
    //         }
    //     }

    //    return -1; 
    }
};