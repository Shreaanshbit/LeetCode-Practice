// LeetCode 125 : Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            while(l<r && !isalnum(s[l])){
                l++;
            }                                //this trims the whitespaces at the end and starting  of the string
            while(l<r && !isalnum(s[r])){
                r--;
        }

            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};