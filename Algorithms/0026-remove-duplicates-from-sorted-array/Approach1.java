
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/solutions/2801876/easy-solution-two-pointer-approach/

class Approach1 {
    public int removeDuplicates(int[] nums) {
        int j = 0;

        for (int i = 0; i < nums.length; i++) {
            int tmp = nums[i];

            while (i < nums.length - 1 && tmp == nums[i + 1]) {
                i++;
            }

            nums[j++] = tmp;
        }
        return j;
    }
