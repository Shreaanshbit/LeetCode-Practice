// LeetCode 349 : Intersection Of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> res;
        for(auto i :nums2){
            if(s1.count(i)){
                res.insert(i);
            }
        }

        return vector<int>(res.begin(),res.end());  //we've to return the answer as vector form.
    }
};