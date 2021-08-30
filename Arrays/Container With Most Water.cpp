class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, max = 0, temp;

        while (left < right)
        {
            max = std::max(max, std::min(height[left], height[right]) * (right - left));

            if (height[left] >= height[right])
            {
                // find the next higher vertical line from the right
                temp = right - 1;
                while (height[temp] < height[right])
                {
                    temp--;
                }
                right = temp;
            }
            else
            {
                // find the next higher vertical line from the left
                temp = left + 1;
                while (height[temp] < height[left])
                {
                    temp++;
                }
                left = temp;
            }
        }

        return max;
    }
};

//TC optimized

static const auto fastIO = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1;
        int ans = INT_MIN;
        while (i < j)
        {
            if (height[i] < height[j])
            {
                ans = max(ans, height[i] * (j - i));
                i++;
            }
            else
            {
                ans = max(ans, height[j] * (j - i));
                j--;
            }
        }
        return ans;
    }
};

//SC optimized

class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        int n = height.size() - 1;
        int left = 0;
        int right = n;
        int maxArea = 0;

        while (left < right)
        {

            int CurrentArea = 0;
            if (height[left] < height[right])
            {
                CurrentArea = (right - left) * height[left];
                left++;
            }
            else
            {
                CurrentArea = (right - left) * height[right];
                right--;
            }

            if (CurrentArea > maxArea)
            {
                maxArea = CurrentArea;
            }
        }
        return maxArea;
    }
};