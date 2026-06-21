class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct1=0,ct2=0,ele1=INT_MIN,ele2=INT_MIN;
   
        for(int i=0;i<nums.size();i++){
            if(ct1==0 && nums[i]!=ele2){
                ct1++;
                ele1=nums[i];

            }else if(ct2==0 && nums[i]!=ele1){
                ct2++;
                ele2=nums[i];

            }else if(nums[i]==ele1){
                ct1++;

            }else if(nums[i]==ele2){
                ct2++;
            }else{
                ct1--;
                ct2--;
            }
        }
     
     vector<int>vec;
ct1=0;
ct2=0;
for(int i=0;i<nums.size();i++){
    if(ele1==nums[i])ct1++;
    if(ele2==nums[i])ct2++;

}
int mini=(int)(nums.size()/3);
if(ct1>mini)vec.push_back(ele1);
if(ct2>mini)vec.push_back(ele2);

        
        
return vec;


        
    }
};