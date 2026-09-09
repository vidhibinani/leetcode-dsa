class Solution {
public:
    long long countCommas(long long n) {
        long long start=1000;
        long long ans=0;
        int commas=1;
        while(start<=n){
            long long end= start * 1000 - 1;
            long long last = min(n,end);
            long long numbers = last-start+1;
            ans += numbers * commas;
            start = start * 1000;
            commas++;
        }
        return  ans;
    }
};