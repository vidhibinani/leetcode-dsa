class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=i+1;
        int maxProfit=0;
        while(j<prices.size()){
       if(prices[i]>prices[j]){
        i++;
       }
       else{
        int ans=prices[j]-prices[i];
        maxProfit=max(maxProfit,ans);
        j++;
       }
        }
        return maxProfit;
    }
};