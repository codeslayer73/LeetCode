class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int MAX = INT_MIN, sum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            for (int j = 0; j < accounts[0].size(); j++)
            {
                sum = sum + accounts[i][j];
            }
            MAX = max(MAX, sum);
            sum = 0;
        }
        return MAX;
    }
};
//TC optimized
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maxSum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int rowSum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                rowSum += accounts[i][j];
            }
            if (rowSum > maxSum)
            {
                maxSum = rowSum;
            }
        }
        return maxSum;
    }
};
//SC optimized
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int res, m = accounts[0].size(), n = accounts.size();
        for (auto i = 0; i < n; i++)
        {
            int sum = 0;
            for (auto j = 0; j < m; j++)
            {
                sum += accounts[i][j];
            }
            if (sum > res)
            {
                res = sum;
            }
        }

        return res;
    }
};