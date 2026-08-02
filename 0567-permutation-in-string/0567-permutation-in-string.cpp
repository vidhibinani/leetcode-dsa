class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        if (s1.length() > s2.length()) {
            return false;
        }
        for(int i=0;i<s1.length();i++){
            f1[s1[i]-'a']++;
            f2[s2[i]-'a']++;
        }
        if(f1==f2){
            return true;
        }
        for(int i=s1.length();i<s2.length();i++){
            f2[s2[i-s1.length()]-'a']--;
            f2[s2[i]-'a']++;
            if(f1==f2){
                return true;
            }
        }
        return false;

        
        
        
    }

};