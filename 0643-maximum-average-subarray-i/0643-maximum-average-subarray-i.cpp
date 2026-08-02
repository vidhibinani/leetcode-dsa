class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            avg=sum/k;
           
        }
         double ans=avg;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            avg=sum/k;
            ans=max(ans,avg);
        }
        return ans;
        
    }
};