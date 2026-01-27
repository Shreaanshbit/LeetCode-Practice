// LeetCode 9 : Palindrome Number

// Approach 1:
class Solution {
public:
    bool isPalindrome(int x) {
        // string s= to_string(x);
        // string rev=s;
        // int l=0;
        // int r=rev.length()-1;
        // while(l<r){             //this is not memory efficient , we manually reverse the string
        //     int t=rev[l];
        //     rev[l]=rev[r];
        //     rev[r]=t;
        //     l++;
        //     r--;
        // }
        // return s==rev;


// Approach 2:
    string s=to_string(x);
    string r=s;
    reverse(r.begin(),r.end());   //this is slightly memory efficient since we use a function to reverse string
    return r==s;
    
    }
};
