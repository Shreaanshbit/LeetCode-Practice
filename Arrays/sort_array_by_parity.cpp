// LeetCode 905 : Sort Array By Parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l=0;
        int r=nums.size()-1;

        for(auto i:nums){
            if(i%2==0){
                ans[l]=i;
                l++;
            }
            else{
                ans[r]=i;
                r--;
            }
        }
        return ans;
    }
};