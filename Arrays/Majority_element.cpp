// LeetCode 169 :Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n =nums.size();
        for(auto i:nums){
            m[i]++;
        }
        for(auto e:m){
            if(e.second>(n/2)){
                return e.first;
            }
        }
        return {};
    }
};