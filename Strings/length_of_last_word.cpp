// LeetCode 58 : Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int i=s.size()-1;
        while(i>=0 && s[i]==' '){   //removing whitesapce at the end of string
            i--;
        }

        while(i>=0 && s[i]!=' '){   //measuring length of last word of string
            length++;
            i--;
        }
        return length;
    }
};