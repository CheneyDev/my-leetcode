// 将矩阵是为一位数组

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int cols = matrix[0].size();
        int start = 0;
        int end = matrix.size() * cols - 1;
        int mid;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            int value = matrix[mid / cols][mid % cols];
            if (value == target)
            {
                return true;
            }
            else if (value < target)
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