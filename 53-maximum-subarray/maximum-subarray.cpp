class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
        int maxsum=nums[0];

       for(auto num:nums){
        sum=sum+num;

        maxsum=max(sum,maxsum);


        if(sum<0){
            sum=0;
        }
       }
        return maxsum;
    }
};