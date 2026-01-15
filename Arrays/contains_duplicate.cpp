// LeetCode 217 : Contains Duplicate
// There are two approaches for this problem using undordered set and unordered map , both have similar runtime

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SET~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s;           //set already removes duplicate values so  we search for each number before inserting it in the set , if alr exist then directly return true
        for(auto i:nums){
            if(s.count(i)){
                return true;
            }
            else{
                s.insert(i);
            }
        }
        return false;
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MAP~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto e:m){
            if(e.second>=2){
                return true;
            }
        }
        return false;
    }
};



