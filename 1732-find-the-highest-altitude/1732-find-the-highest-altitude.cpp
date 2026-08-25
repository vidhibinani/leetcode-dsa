class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current=0;
        int maxalt=0;
        for(int i=0;i<gain.size();i++){
            current=current+gain[i];
            maxalt=max(maxalt,current);
        }
        return maxalt;
    }
};