// LeetCode 88 : Merge Sorted Arrays

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){              //we start comparing and placing elements from the back of the array 
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0){                  //nums2 might have remaining elements so we place them now, nums1 cant have remaining elements and even if it has they're alr in sorted position
            nums1[k]=nums2[j];
            j--;
            k--;
        }
    }
};