class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //OPTIMAL SOLUTION BY USING KADANE'S ALGO
        //tc = O(n)
        //sc = O(1)
        int sum = 0 ;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(maxi, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};





        //  BRUTE FORCE SOLUTION   
        //tc = O(n3)
        //sc = O(1)
       /* int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++ ){
            //iteration for j 
             for(int j = i ; j < nums.size() ; j++ ){
                int sum = 0 ;
               for (int k = i; k <= j; k++){
                    sum += nums[k];
                 maxi = max(sum,maxi);
             }
        }
        } 
        return maxi;*/
   
//BETTER FORCE SOLUTION  
//tc = O(n2)
//sc = O(1)
  /*int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++ ){
            int sum = 0 ;
            //iteration for j 
             for(int j = i ; j < nums.size() ; j++ ){
              
                sum += nums[j];
                 maxi = max(sum,maxi);
        }
        } 
        return maxi;
    }
};*/
