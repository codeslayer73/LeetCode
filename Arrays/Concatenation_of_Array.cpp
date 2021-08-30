class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        ans = nums;
        for (int j = 0; j < n; j++)
        {
            ans.push_back(nums[j]);
        }
        return ans;
    }
};