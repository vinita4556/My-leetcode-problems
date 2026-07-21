class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // STEP -1 FIND THE PIVOT 
        int pivot = -1 ;
        int n = nums.size();
        //LOOP 
        for(int i = n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                pivot = i ;
                break;
            }
        }
        if(pivot == -1){
            //REVERSE THE NUMBER
            //using c++ stl
            reverse(nums.begin(),nums.end());  //In Place Changes
            return;
        }
       // STEP -2 loop for right most element (RME)
       for(int i = n-1 ; i>pivot ; i-- ){
        if(nums[i] > nums[pivot]){
            //swapping used
            swap(nums[i],nums[pivot]);
            break;
        }
       }
       // STEP -3 REVERSE ELEMNET 
       int i = pivot+1 ;
       int j = n-1 ;
       //Condition 
       while(i <= j ){
        swap(nums[i],nums[j]) ;
        i++;
        j--;
       }
    }
};