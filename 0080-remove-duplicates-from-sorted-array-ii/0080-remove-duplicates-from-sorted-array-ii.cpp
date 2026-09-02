class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int pointer=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[pointer-2]){
                nums[pointer]=nums[i];
                pointer++;
            }
        }
        return pointer;
    }
};