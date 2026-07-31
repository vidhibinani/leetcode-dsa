class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        vector<pair<int, int>> cars;
        int fleet=0;
        int n=p.size();
        for(int i=0;i<n;i++){
            cars.push_back({p[i], s[i]});
        }
        sort(cars.begin(),cars.end());
        double lasttime=0;
        for(int i=n-1;i>=0;i--){
            double currenttime=(double)(target-cars[i].first)/cars[i].second;
            if(currenttime>lasttime){
                fleet++;
                lasttime=currenttime;
            }  
        }
        return fleet;

        
    }
};