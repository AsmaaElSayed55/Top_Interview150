class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,count=s.size()-1;;
        while(s[count]==' ') count--;
        for(int i=count;i>=0;i--)
        {
            if(s[i]!=' ')ans++;
            else break;
        }
        return ans;
    }
};