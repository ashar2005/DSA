class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int slow = 0;
        for (int fast = 0; fast < arr.size(); fast++) {
            if (arr[fast] == 0) {
                swap(arr[slow], arr[fast]);
                slow++;
            }
        }
    }
};