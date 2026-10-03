class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        long long n=1,zero=0;
        for(int i=0;i<v.size();i++){
            if(v[i])
                n*=v[i];
            else zero++;
        }
        for(int i=0;i<v.size();i++)
        {
            if(zero==v.size())v[i]=0;
            else if(v[i]==0){
                if(zero==1)
                {
                    v[i]=n;
                }
            }
            else
            {
                if(zero)v[i]=0;
                else v[i]=n/v[i];
            }
        }
        return v;
    }
};