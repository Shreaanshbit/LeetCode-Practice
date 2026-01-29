// LeetCode 70 : Climbing Stairs

class Solution {
public:
    int climbStairs(int n) { //exactly same as fibo series code
        if (n<=2){
            return n;
        }
        int a=1;
        int b=2;
        for(int i=3;i<=n;i++){
            int temp=a+b;
            a=b;
            b=temp;
        }
        return b;
    }
};