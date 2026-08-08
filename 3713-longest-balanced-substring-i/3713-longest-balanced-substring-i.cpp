class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>mp;
            int maxf=0;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                maxf=max(maxf,mp[s[j]]);
                int len=j-i+1;
                if(mp.size()*maxf==len){
                    ans=max(ans,len);
                }
            }

        }
        return ans;
    }
};