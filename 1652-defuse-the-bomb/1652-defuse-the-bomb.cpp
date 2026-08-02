class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);
        if (k == 0){
            return ans;
        }
        int sum = 0;
        if (k > 0) {
            for (int j = 1; j <= k; j++) {
                sum += code[j % n];
            }
            ans[0] = sum;
            for (int i = 1; i < n; i++) {
                sum -= code[i % n];
                sum += code[(i + k) % n];
                ans[i] = sum;
            }
        }
        else {
            k = -k;
            for (int j = 1; j <= k; j++) {
                sum += code[(n - j) % n];
            }
            ans[0] = sum;
            for (int i = 1; i < n; i++) {
                sum -= code[(i - k - 1 + n) % n];
                sum += code[(i - 1 + n) % n];
                ans[i] = sum;
            }
        }
        return ans;
    }
};