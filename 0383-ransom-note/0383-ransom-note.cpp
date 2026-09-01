class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        if(r.size()>m.size()){
            return false;
        }
        for(int i =0;i<r.size();i++){
            mp[r[i]]++;
        }
        for(int i=0;i<m.size();i++){
            mp2[m[i]]++;
        }
        for(auto x:mp){
            if(mp2[x.first]<x.second){
                return false;
            }
        }
        return true;
        
    }
};