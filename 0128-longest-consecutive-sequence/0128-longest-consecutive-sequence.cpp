class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>se;
        int ans=0;
        for(int x:nums){
            se.insert(x);
        }
        for(int x:se){
            if(se.find(x-1)==se.end()){
                int current=x;
                int count=1;
                while(se.find(current+1)!=se.end()){
                    count++;
                    current++;
                }
                ans=max(ans,count);
            }
        }
        return ans;  
    }
};