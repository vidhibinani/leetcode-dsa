class Solution {
public:
int M=1e9+7;
    int numSubseq(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        int result=0;
        vector<int>power(nums.size());
        power[0]=1;
        for(int i=1;i<nums.size();i++){
            power[i]=(power[i-1]*2)%M;

        }
        while(left<=right){
            if(nums[left]+nums[right]<=target){
                result= (result % M +power[right-left])%M;
                left++;
            }
            else{
                right--;
            }
            
        }
        return result;
    }
};