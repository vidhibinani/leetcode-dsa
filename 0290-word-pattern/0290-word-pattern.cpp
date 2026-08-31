class Solution {
public:
    bool wordPattern(string p, string s) {
        stringstream ss(s);
        vector<string>words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        if(p.size()!=words.size()){
            return false;
        }
        unordered_map<char,string>mp;
        unordered_map<string,char>mp2;
        for(int i=0;i<p.size();i++){
            if(mp.find(p[i])!=mp.end()){
                if(mp[p[i]]!=words[i]){
                    return false;
                }
            }
            if(mp2.find(words[i])!=mp2.end()){
                if(mp2[words[i]]!=p[i]){
                    return false;
                }
            }
            mp[p[i]]=words[i];
            mp2[words[i]]=p[i];
        }
        return true;
    }
};