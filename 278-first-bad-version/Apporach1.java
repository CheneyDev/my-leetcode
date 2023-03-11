
public class Apporach1 {
    public int firstBadVersion(int n) {
        long low=1;
        long high=n;
        long mid;
        boolean isBad;
        while(low<=high){
            mid=(low+high)/2;
            isBad=isBadVersion((int)mid);
            if(!isBad){
                low=mid+1;
            }else if(!isBadVersion((int)mid-1)){
                return (int)mid;
            }else if(isBadVersion((int)mid-1)){
                high=mid-1;
            }
        }
        return -1;
    }
}
