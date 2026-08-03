class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxf=0;
        int ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(maxf<it.second){
               maxf=it.second;
               ans=it.first;
               
            }
        }
        return ans;
    }
};