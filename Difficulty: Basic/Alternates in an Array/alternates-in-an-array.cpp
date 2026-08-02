class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> total;
        for(int i=0;i<arr.size();i+=2){
            total.push_back(arr[i]);
            
        }
        return total;
        
    }
};