class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>words;
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        int left=0;
        int right=words.size()-1;
        string ans="";
        while(left<right){
            swap(words[left],words[right]);
            left++;
            right--;
        }
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(i!=words.size()-1){
                ans+=" ";
            }
        }
        return ans;
    }
};