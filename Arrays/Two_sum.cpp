//LeetCode 1 : Two Sum


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int y=target-x;
            if(m.count(y)){
                return {m[y],i};
            }
            else{
                m[x]=i;
            }
        }
        return {};
    }
};