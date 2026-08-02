class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int sum=0;
        int n=cp.size();
        for(int i=0;i<k;i++){
            sum+=cp[i];
        }
        int ans=sum;
        for(int i=k-1,j=n-1;i>=0;i--,j--){
            sum-=cp[i];
            sum += cp[j];
            ans = max(ans, sum);
        }
        return ans;
    }
};