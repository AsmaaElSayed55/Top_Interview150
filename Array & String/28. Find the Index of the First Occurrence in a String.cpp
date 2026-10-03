class Solution {
public:
    int strStr(string s1, string s2) {
        if(s1.find(s2)>=0)
            return s1.find(s2);
        return -1;
    }
};