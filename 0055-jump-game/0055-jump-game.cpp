class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxd=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxd){
                return false;
            }
            maxd=max(maxd,i+nums[i]);
            if(maxd>=nums.size()){
                return true;
            }
        }
        return true;
    }
};