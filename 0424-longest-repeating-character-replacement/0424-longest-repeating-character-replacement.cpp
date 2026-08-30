class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int right=0;
        int ans=0;
        int maxf=0;
        unordered_map<char,int>mp;
        while(right<s.size()){
            mp[s[right]]++;
            maxf=max(maxf,mp[s[right]]);
            while((right-left+1)-maxf>k){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
        
    }
};