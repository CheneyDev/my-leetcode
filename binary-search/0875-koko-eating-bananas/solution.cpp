class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1;
        int right = *max_element(begin(piles), end(piles)) + 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            int t = 0;
            for (int p : piles)
            {
                t += (p + mid - 1) / mid;
            }
            if (t <= h)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};