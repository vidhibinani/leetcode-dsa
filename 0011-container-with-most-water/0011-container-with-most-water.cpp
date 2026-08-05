class Solution {
public:
    int maxArea(vector<int>& h) {
        int left=0;
        int right=h.size()-1;
        int result=0;
        while(left<right){
            int area=min(h[left],h[right]) * (right-left);
            result=max(result,area);
            if(h[left]<h[right]){
                left++;
            }
            else{
                right--;
            }
        } 
        return result;
        
    }
};