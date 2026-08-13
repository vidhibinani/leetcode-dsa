class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int ans=0;
        set<char>se;
        while(right<s.size()){
            while(se.find(s[right])!=se.end()){
                se.erase(s[left]);
                left++;
            }
            se.insert(s[right]);
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans; 
    }
};