class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int i=0;
        int maxsum=nums[0];
        while(i<=nums.size()-1){
            sum += nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
            i++;
        }
        return maxsum;
    }
};