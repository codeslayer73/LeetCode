class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int i = 0;
        vector<int> ans;

        while (i < nums.size())
        {
            int c = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    c++;
                }
            }
            ans.push_back(c);
            i++;
        }
        return ans;
    }
};

//TC optimized
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int i = 0;
        vector<int> ans;

        while (i < nums.size())
        {
            int c = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    c++;
                }
            }
            ans.push_back(c);
            i++;
        }
        return ans;
    }
};

//SC optimized
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> result(size);

        for (int i = 0; i < size; i++)
        {
            result[i] = 0;
            for (int j = 0; j < size; j++)
            {
                if (i == j)
                    continue;
                if (nums[i] > nums[j])
                    result[i]++;
            }
        }

        return result;
    }
};