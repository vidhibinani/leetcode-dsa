class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        //max subarray
        int sum=0;
        int maxsum= nums[0];
        int i=0;
        while(i<nums.size()){
            sum += nums[i];
            maxsum=max(maxsum,sum);
            if(sum<0){
                sum=0;
            }
            i++;
        }
        //total sum
        int totalsum= accumulate(nums.begin(),nums.end(),0);
        //minsum
        int sum2=0;
        int minsum=nums[0];
        int j=0;
        while(j<nums.size()){
            sum2+=nums[j];
            minsum=min(sum2,minsum);
            if(sum2>0){
                sum2=0;
            }
            j++;
        }
        //circular sum
        if(maxsum<0){
            return maxsum;
        }
        int circularsum= totalsum-minsum;
        return max(maxsum,circularsum);
    }
};