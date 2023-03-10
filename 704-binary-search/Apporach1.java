// 直觉

class Apporach1{
    public int search(int[] nums,int target){
        int low=0;
        int high=nums.length-1;
        int mid=(high+low)/2;

        while(low<=high){
            if(target==nums[mid]){
                return mid;
            }else if(target>nums[mid]){
                low=mid+1;
                mid=(high+low)/2;
            }else if(target<nums[mid]){
                high=mid-1;
                mid=(high+low)/2;
            }
        }
        return -1;
    }
}