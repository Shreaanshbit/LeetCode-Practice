// LeetCode 628 : Maximum product of three numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());

        int res1= nums[n-1]*nums[n-2]*nums[n-3]; // this takes into account the largest positive numbers.

        int res2=nums[0]*nums[1]*nums[n-1]; // this takes into account the negative numbers and the largest positive numbers.

        return max(res1,res2);
    }
};