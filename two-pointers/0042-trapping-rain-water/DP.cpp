class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> leftHeight(n);
        vector<int> rightHeight(n);
        int ans = 0; // answer
        for (int i = 0; i < n; i++)
        {
            leftHeight[i] = (i == 0 ? height[i] : max(leftHeight[i - 1], height[i]));
        }
        for (int i = n - 1; i >= 0; i--)
        {
            rightHeight[i] = (i == n - 1 ? height[n - 1] : max(rightHeight[i + 1], height[i]));
        }
        for (int i = 0; i < n; i++)
        {
            ans += min(leftHeight[i], rightHeight[i]) - height[i];
        }
        return ans;
    }
};