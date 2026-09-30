class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int EC) {
        int maxe = 0;
        for(int i = 0; i < nums.size(); i++) {
            maxe = max(maxe, nums[i]);
        }
        vector<bool> ans;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] + EC >= maxe) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};