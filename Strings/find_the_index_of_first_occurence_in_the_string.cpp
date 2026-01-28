// LeetCode 28 : Find The First Occurence in The String

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length()){
            return -1;
        }
        for(int i=0;i<=haystack.length()-needle.length();i++){  //we do not have to check the extra indices from where if we start checking it wont fit inside haystack string length
            if(haystack.substr(i,needle.length())==needle){
                return i;
            }
        }
        return -1;
    }
};