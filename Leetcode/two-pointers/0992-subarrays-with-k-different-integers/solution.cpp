class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }

    int helper(vector<int>& nums,int k){

        int n=nums.size();
        unordered_map<int,int> map;
        int start=0,end=0,count=0;
        while(end<n){
            map[nums[end]]++;
            while(map.size()>k){
                map[nums[start]]--;
                if(map[nums[start]]==0){
                    map.erase(nums[start]);
                }
                start++;
            }
            count+=(end-start-1);
            end++;
        }
        return count;
    }
};