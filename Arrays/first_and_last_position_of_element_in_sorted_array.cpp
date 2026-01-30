// LeetCode 34 : Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //we run binary search twice here
        int l=0;
        int r=nums.size()-1;
        int first=-1;
        int last=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                first=m;
                r=m-1;        //this might not be the first occurence since bianry search attacks at the mid of an array so to make sure we perform the binary search further
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        } 

        l=0;
        r=nums.size()-1;

        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                last=m;
                l=m+1;           //same as we did in finding the first occurence
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return {first,last};   
        }
};