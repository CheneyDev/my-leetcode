
public class Apporach1 {

    public int searchInsert(int[] nums, int target) {
        int low=0;
        int high=nums.length-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target==nums[mid]){
                return mid;
            }else if(target<nums[mid]){
                if(mid!=0){
                    if(target==nums[mid-1]) return mid-1;
                    else if(target<nums[mid-1]) high=mid-1;
                    else if(target>nums[mid-1]) return mid;
                }else{
                    return 0;
                }
                
            }else if(target>nums[mid]){
                if(mid!=(nums.length-1)){
                    if(target==nums[mid+1]) return mid+1;
                    else if(target<nums[mid+1]) return mid+1;
                    else if(target>nums[mid+1]) low=mid+1;
                }else{
                    return mid+1;
                }
                
            }
        }
        return -1;
    }
    
}