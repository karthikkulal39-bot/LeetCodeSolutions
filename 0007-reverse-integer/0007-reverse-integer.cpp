class Solution {
public:
    int reverse(int x) {
        long long sum=0; 

        int rem=0;
        while(x!=0){
            rem=x%10;
            x=x/10;
            sum=rem+sum*10;
        }
     
        if(sum>INT_MAX||sum<INT_MIN){
            return 0;
        }
        return (int)sum;
    }
};