// LeetCode 414 : Third maximum Number

// There are two approaches to this problem

// 1
class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
       nums.erase(unique(nums.begin(),nums.end()),nums.end()); //removes duplicates
       if(nums.size()<3){
        return nums[0];
       } 
       else return nums[2];
          }
};


// 2
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>s;
        for(auto i:nums){
            s.insert(i);
        }

        vector<int>res;
        for(auto i:s){
            res.push_back(i);
        }
        sort(res.begin(),res.end(),greater<int>());

        if(res.size()<3){
            return res[0];
        }
        else{
            return res[2];
        }
        return {};
    }
};