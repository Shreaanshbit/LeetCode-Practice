// LeetCode 389 : Find The difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>m;

        for(auto c:s){              //add each cahr f string s to map
            m[c]++;
        }

        for(auto c:t){
            if(m[c]>0){            //reduce the frequency as we find the same character on strin t
                m[c]--;
            }
            else{
                return c;       //if same char not found then thats the required char
            }
        }
        return {};
    }
};