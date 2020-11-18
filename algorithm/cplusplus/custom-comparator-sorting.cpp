#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    static bool compare(string& s1, string& s2){
        string t1 = s1 + s2;
        string t2 = s2 + s1;
        return t1 > t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> numsVec;
        
        for(int i=0; i<nums.size(); i++){
            numsVec.push_back(to_string(nums[i]));
        }
        
        sort(numsVec.begin(), numsVec.end(), compare);
        
        if(*numsVec.begin() == "0") return "0";
        
        string str = "";
        for(int i=0; i<numsVec.size(); i++){
            str = str + numsVec[i];
        }
        
        return str;
    }
};