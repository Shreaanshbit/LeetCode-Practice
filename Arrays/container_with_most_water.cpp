// LeetCode 11 : Container with most water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int ans=0;
        while(l<r){
            int h=min(height[l],height[r]);   //we consider the minimum height bcz water spills from the shorter side
            int w=r-l;

            ans=max(ans,h*w);

            if(height[l]<height[r]){
                l++;                     //we find the longest wall bcz shorter the wall less the water that can be stored so look for long wall and try to maximize the area.
            }
            else{
                r--;
            }
        }
        return ans;
    }
};