class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> ret(n, 0);
        ret[0] = nums[0];
        for (int i = 1; i < n; i++) {
            ret[i] = ret[i - 1] + nums[i];
        }
        return ret;
    }
};