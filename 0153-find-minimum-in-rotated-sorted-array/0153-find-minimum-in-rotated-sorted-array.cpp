class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int low=0;
        int high = nums.size()-1;
        //CONDITION
        while(low<=high){
            int mid = low+(high-low) / 2;
            //CONDITION 
            if(nums[low]<=nums[mid]){
                ans = min(ans, nums[low]); // UPDATE THE VALUE
                low = mid+1; //MOVE RIGHT 
            }else{
                ans = min(ans, nums[mid]);
                high = mid-1; //MOVE LEFT
            }
        }
        return ans;
    }
};