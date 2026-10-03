class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int p1=0,p2=n.size()-1;
        vector<int>ans;
        while(p1<p2)
        {
            int x=n[p1]+n[p2];
            if(x<target) p1++;
            else if(x>target) p2--;
            else {
                ans.push_back(p1+1),ans.push_back(p2+1);
                return ans;
            }
        }
        return ans;
    }
};