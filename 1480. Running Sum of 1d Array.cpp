// 1480. Running Sum of 1d Array



class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int runningsum = 0;
       vector<int> ans;
      for(int i = 0; i < nums.size(); i++){
        runningsum += nums[i];
        ans.push_back(runningsum);}
        return ans;
    }
};


