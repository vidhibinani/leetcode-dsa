class Solution {
public:
    int mySqrt(int x) {
        int left=1;
        int right=x;
        int ans=0;
        while(left<=right){
            long long mid=left+(right-left)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                right=mid-1;
            }
            else{
                ans=mid;
                left=mid+1;
            }

            
        }
        return ans;
        
    }
};