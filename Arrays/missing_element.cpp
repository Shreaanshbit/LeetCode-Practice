class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int exp=n*(n+1)/2;
        int actl=0;
        for(auto i:nums){
            actl+=i;
        }
        return exp-actl;
    }
};