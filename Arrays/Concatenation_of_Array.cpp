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

//optimal in run time code
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> res(nums.size() * 2);
        int sz = nums.size();
        for (int i = 0; i < res.size(); i++)
        {
            res[i] = nums[i % sz];
        }
        return res;
    }
};

//optimal in space complexity
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(2 * n, 0);
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};