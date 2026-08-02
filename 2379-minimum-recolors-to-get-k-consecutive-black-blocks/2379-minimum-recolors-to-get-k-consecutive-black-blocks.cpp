class Solution {
public:
    int minimumRecolors(string b, int k) {
        int color=0;
        for(int i=0;i<k;i++){
            if(b[i]=='W'){
                color++;
            }
        }
        int ans=color;
        for(int i=k;i<b.size();i++){
            if(b[i-k]=='W'){
                color--;
            }
            if(b[i]=='W'){
                color++;
            }
            ans=min(ans,color);
        }
        return ans;
    }
};