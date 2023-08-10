
// https://www.youtube.com/watch?v=wDBnBA82z1c&ab_channel=LeetCode%E5%8A%9B%E6%89%A3

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            return helper(nums2,nums1);
        }else{
            return helper(nums1,nums2);
        }
    }

    double helper(vector<int>& nums1,vector<int>& nums2){
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;

        int left=0;
        int right=n1;
        int cutNums1;
        int cutNums2;

        int totalLeft=n1+(n2-n1+1)/2;
        
        while(left<=right){
            cutNums1=left+(right-left+1)/2;
            cutNums2=totalLeft-cutNums1;

            int nums1MaxLeft = (cutNums1 == 0 ? INT_MIN : nums1[cutNums1 - 1]);
            int nums1MinRight = (cutNums1 == n1 ? INT_MAX : nums1[cutNums1]);
            int nums2MaxLeft = (cutNums2 == 0 ? INT_MIN : nums2[cutNums2 - 1]);
            int nums2MinRight = (cutNums2 == n2 ? INT_MAX : nums2[cutNums2]);

            if (nums1MaxLeft <= nums2MinRight && nums2MaxLeft <= nums1MinRight) {
                if (n % 2 == 1) {
                    return max(nums1MaxLeft, nums2MaxLeft);
                } else {
                    return (double)(max(nums1MaxLeft, nums2MaxLeft) + min(nums1MinRight, nums2MinRight)) / 2;
                }
            } else if (nums1MaxLeft > nums2MinRight) {
                right = cutNums1 - 1;
            } else {
                left = cutNums1 + 1;  // Modify: Change left to cutNums1 + 1
            }
        }

        return 0;
    }
};