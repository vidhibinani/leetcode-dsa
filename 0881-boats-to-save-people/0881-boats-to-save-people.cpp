class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(),p.end());
        int left=0;
        int right=p.size()-1;
        int boats=0;
        
        while(left<=right){
            int result=p[left]+p[right];
            if(result>limit){
                boats++;
                right--;
            }
            else{
                boats++;
                left++;
                right--;
            }
        }
        return boats;

    }
};