class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1; //first element is always unique 
        for(int i=1;i<nums.size();i++){ //start iterating from 1 bcz 0th element is alr unique and in place
            if(nums[i]!=nums[k-1]){ //we found a new unique member so we place it at the 1st index in array next to the alr unique element
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};