class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
// TC optimized
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};
//SC optimized
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> ans(len);
        for (int i = 0; i < len; ++i)
        {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};