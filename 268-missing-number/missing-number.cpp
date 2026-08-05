class Solution {
public:
    int missingNumber(vector<int>& nums) {
    

        int n = nums.size();

        // Expected sum from 0 to n
        int expectedSum = n * (n + 1) / 2;

        // Actual sum of array elements
        int actualSum = 0;
        for (int i = 0; i < n; i++) {
            actualSum += nums[i];
        }

        // Missing number
        return expectedSum - actualSum;
    }
};
    