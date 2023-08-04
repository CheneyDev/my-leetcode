//https://leetcode.com/problems/squares-of-a-sorted-array/solutions/221922/java-two-pointers-o-n/?envType=study-plan&id=algorithm-i&orderBy=hot
//Java two pointers

class Approach1 {
    public int[] sortedSquares(int[] nums) {
        int numsLength = nums.length;
        int[] newNums = new int[numsLength];
        int p1 = 0;
        int p2 = numsLength - 1;
        for (int i = numsLength-1; i >= 0; i--) {
            if (Math.abs(nums[p1]) > Math.abs(nums[p2])) {
                newNums[i] = nums[p1] * nums[p1];
                p1++;
            } else {
                newNums[i] = nums[p2] * nums[p2];
                p2--;
            }
        }
        return newNums; 
    }
}