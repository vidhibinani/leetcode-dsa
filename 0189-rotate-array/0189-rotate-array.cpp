class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // 1. Reverse last k elements
        reverse(nums.begin() + (n - k), nums.end());

        // 2. Reverse the whole array
        reverse(nums.begin(), nums.end());

        // 3. Reverse first n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};