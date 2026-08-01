class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it = max_element(nums.begin(),nums.end());
        int maxvalue=*it;
        int maxindex= it-nums.begin();
        for(int i=0;i<nums.size();i++){
            if(i!=maxindex){
                if(maxvalue<2*nums[i]){
                    return -1;
                }
            }

        }
        return maxindex;
    }
};