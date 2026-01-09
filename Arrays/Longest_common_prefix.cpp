//LeetCode 14 : Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prefix)!=0){      //we find where does the the assumed prefix matches the other strings  and keep shortening the string till we find the common prefix
            prefix=prefix.substr(0,prefix.length()-1);
            }
        }
            return prefix;
    }
};