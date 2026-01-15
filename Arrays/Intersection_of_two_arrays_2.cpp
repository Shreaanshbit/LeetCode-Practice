// LeetCode 350 : Intersection of two arrays II

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> s;
        vector<int>res;

        for(int i:nums1){
            s[i]++;
        }
        for(int i:nums2){
            if(s[i]>0){  //this checks if the same element is present in nums2 and nums1 
                 res.push_back(i);
                 s[i]--;
            }
        }
        return res;
    }
};