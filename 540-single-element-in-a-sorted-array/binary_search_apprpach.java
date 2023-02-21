
// https://leetcode.com/problems/single-element-in-a-sorted-array/solutions/3212230/binary-search-with-pics-video-java-c-python/
public class binary_search_apprpach {
    public int singleNonDuplicate(int[] nums) {
        int low=0;
        int high=nums.length-1;
        if(nums.length==1) return nums[0];
        if(nums[low]!=nums[low+1]) return nums[low];
        if(nums[high]!=nums[high-1]) return nums[high];

        while(low<high){

            int mid=(high+low)/2;
            
            if(mid%2==1){
                mid--;
            }
            if(nums[mid]!=nums[mid+1]){
                high=mid;
            }else{
                low=mid+2;
            }
        }
        return nums[low];
    }
}
