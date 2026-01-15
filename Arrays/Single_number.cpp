// LeetCode 136 : Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){  //we jump 2 places at each iteration bcz if 2 numbers are same they're consecutive so the loop migh malfunction
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums.back();
    }
};