class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start = 0;
        int end = rows - 1;
        int mid;

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (matrix[mid][0] <= target && matrix[mid][cols - 1] >= target)
            {
                return binarySearch(matrix[mid], target);
            }
            else if (matrix[mid][cols - 1] < target)
            {
                start = mid + 1;
            }
            else if (matrix[mid][0] > target)
            {
                end = mid - 1;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
    bool binarySearch(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return false;
    }
};