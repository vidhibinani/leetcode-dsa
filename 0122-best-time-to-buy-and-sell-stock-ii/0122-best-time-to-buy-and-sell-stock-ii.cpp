class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=i+1;
        int maxp=0;
        while(j<prices.size()){
            if(prices[i]>prices[j]){
                i=j;
            }
            else{
                int ans=prices[j]-prices[i];
                maxp+=ans;
                i=j;
            }
            j++;
        }
        return maxp;
    }
};