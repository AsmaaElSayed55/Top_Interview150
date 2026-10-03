class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty())return true;
        for(int i=0;i<s.size()&&!t.empty();)
        {
            if(i<t.size()&&t[i]!=s[i])t.erase(t.begin()+i);
            else if(i>=t.size())break;
            else ++i;

        } // cout<<t;
        t=t.substr(0,s.size());
        return (s==t);
    }
};