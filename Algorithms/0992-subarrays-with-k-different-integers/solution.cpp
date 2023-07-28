class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int left=0;
        unordered_map<int,int> count;
        int distinct_count =0;
        int result=0;

        for(int right=0;right<nums.size();right++){

            count[nums[right]]++;

            if(count[nums[right]]==1){
                distinct_count++;
            }

            if(distinct_count>k){
                count[nums[left]]--;
                if(count[nums[left]]==0){
                    distinct_count--;
                }
                left++;
            }

            if(distinct_count==k){
                result+=right-left+1;
            }

        }

        return result;
    }
};