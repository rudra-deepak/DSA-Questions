//485. Max Consecutive Ones


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;   // current consecutive 1s
    int maxi = 0;    // maximum consecutive 1s found     
    for(int i = 0; i < nums.size(); i++)
{
        if(nums[i] == 1){
            count++;
          if(count > maxi)
           maxi = count; }
         else{
         count= 0;}
}   
  return maxi;
    }
  
};
