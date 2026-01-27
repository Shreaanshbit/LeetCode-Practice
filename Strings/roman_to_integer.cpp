// LeetCode 13 : Roman To Integer

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> r={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int res=0;
        for(int i=0;i<s.length();i++){
            int curr=r[s[i]];
            int next=(i+1<s.length())? r[s[i+1]]:0;
            if(curr<next){
                res-=curr;
            }
            else{
                res+=curr;
            }
        }
        return res;
    }
};