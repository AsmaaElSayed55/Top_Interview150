class Solution {
public:
    string reverseWords(string str) {
        vector<string>st;string s="";
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]!=' ')
            {
                s=str[i]+s;
            }
            else
            {
                if(!s.empty())
                    st.push_back(s),s="";
            }
        }
        if(!s.empty()) st.push_back(s),s="";
        string print;
        for(auto i:st)
            print+=i,print+=' ';

        while(print.back()==' ')
            print.pop_back();
        while(print.front()==' ')
            print.erase(0,1);
        return print;
    }
};