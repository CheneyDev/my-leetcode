// 在这个问题中，我们需要找到两个线段，它们和 x 轴组成的容器可以装下最多的水。
// 容器的盛水量由两个因素决定：容器的宽度和容器两侧较短的高度。
// 因此，在寻找最大容量的过程中，我们需要尽量增大容器的宽度，并同时考虑较小的高度。
// 假设有一个容器，左边的线段高度为 Hleft，右边的线段高度为 Hright，
// 并且 Hleft < Hright。这时容器的容量为 (Hright - Hleft) * width，其中 width 是容器的宽度，
// 也就是右指针和左指针之间的距离。
// 如果我们保持右指针不动而移动左指针，新的容器的宽度将变小，而高度最多保持不变（可能变小）。
// 所以新容器的容量肯定会小于原容器的容量。
// 同理，如果我们保持左指针不动而移动右指针，新的容器的宽度也将变小，
// 而高度最多保持不变。所以新容器的容量也肯定会小于原容器的容量。
// 因此，为了寻找可能的最大容量，我们需要不断地移动较小高度的指针，
// 希望在这个过程中能找到更高的线段，从而增大容器的容量。这样，在遍历的过程中，
// 我们逐渐将较小高度的指针向较大高度的指针靠拢，直到两个指针相遇，这样就能找到可能的最大容量。

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int maxArea=0;
        while (left<right)
        {
            int currentArea=min(height[left],height[right])*(right-left);
            maxArea=max(currentArea,maxArea);
            height[left]<height[right]?left++:right--;
        }
        return maxArea;
        
    }
};