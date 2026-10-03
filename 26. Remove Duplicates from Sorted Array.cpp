class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(auto i:nums)
        {
            if(!st.count(i))
                st.insert(i);
        }
        nums.clear();
        for(auto i:st)
            nums.push_back(i);
        return st.size();
    }
};