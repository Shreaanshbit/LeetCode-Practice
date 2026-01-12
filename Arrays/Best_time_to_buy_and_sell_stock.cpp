// LeetCode 121 : Best time to buy and sell stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxpr=0;
        for(int p:prices){
            if(p<min){
                min=p;
            }
            else{         // we only run this code block when new min is not found so that we could check if the maxpr is maximum or no
                maxpr=max(maxpr,p-min);
            }
        }
        return maxpr;
    }
};