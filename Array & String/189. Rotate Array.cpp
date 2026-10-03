class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int>dq;
        for(auto i:nums)
            dq.push_back(i);
        while(k--)
        {
            int rotate=dq.back();
            dq.pop_back();
            dq.push_front(rotate);
        }
        nums.clear();
        for(auto i:dq)
            nums.push_back(i);
    }
};