class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};

// TC optimized
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};

//SC optimized
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i - 1] + nums[i];
        }
        return nums;
    }
};