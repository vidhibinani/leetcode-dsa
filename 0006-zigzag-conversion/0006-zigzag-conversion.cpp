class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size())
            return s;

        vector<string> rows(numRows);

        int i = 0;
        int direction = 1;

        for(char ch : s) {
            rows[i] += ch;

            if(i == 0)
                direction = 1;
            else if(i == numRows - 1)
                direction = -1;

            i += direction;
        }

        string ans = "";

        for(string row : rows)
            ans += row;

        return ans;
    }
};