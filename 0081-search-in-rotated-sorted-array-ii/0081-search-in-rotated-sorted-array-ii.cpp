class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
       int high = nums.size()-1;
       while(low<=high){
        int mid = low+(high-low) / 2;
        if(nums[mid]==target) return true;
        if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
            low++,high--;
            continue;
        }
        //IDENTIFY SORTED HALF
        //LEFT SORTED
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<=nums[mid]){
                high=mid-1;//MOVE LEFT
            }else{
                low=mid+1;//MOVE RIGHT
            }
            //RIGHT SORTED
        }else{
            if(nums[mid]<=target && target<=nums[high]){
                low = mid+1;
            }else{
                high=mid-1;
            }
        }
       }
       return false;

    }
};
    
   