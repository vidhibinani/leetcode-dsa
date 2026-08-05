class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        int result=0;
        while(left<right){
            int sum=nums[left]+nums[right];
            result=max(result,sum);
            left++;
            right--;
            
        }
       return result;
    }
};