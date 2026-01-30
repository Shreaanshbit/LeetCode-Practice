// LeetCode 134 : Gas Station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0;
        int start=0;   // stores the index for starting position
        int tank=0;

        for(int i=0;i<gas.size();i++){
            int diff=gas[i]-cost[i];   //this is the total profit or loss in reaching gas station so if it is negative or or 0 we start at different index
            total+=diff;
            tank+=diff;

            if(tank<0){
                start=i+1;     // if by the above condition tank is not filled we start at another index and reset the tank to 0
                tank=0;
            }
        }
        if (total<0) return -1;
        else return start;
    }
};