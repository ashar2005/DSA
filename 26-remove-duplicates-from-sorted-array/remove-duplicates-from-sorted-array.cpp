class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        vector<int> unique;
        unique.push_back(nums[0]);

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i+1]) {
                unique.push_back(nums[i+1]);
            }
        }

        for (int i = 0; i < unique.size(); i++) {
            nums[i] = unique[i];
        }

        return unique.size();
    }
};