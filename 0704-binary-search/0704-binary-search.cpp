class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size() - 1 ;

        // CONDITION
        while(start <= end ){
            //FIND THE MIDDLE ELEMNET
            //int mid = (start + end) / 2//
            int mid = start + (end - start ) / 2;
 
            if(target < nums[mid]) {
                // this  is the left side condition start will reamain same but end will be change so 
                end = mid - 1 ;
            }   else if(target > nums[mid]) {
                // this  is the right side condition end will reamain same but start will be change so 
                start = mid + 1 ;
            } else {
                // found my answer
                return mid ;
            }
        }

        return -1 ;
    }
};