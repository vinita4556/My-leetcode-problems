class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       /* brute force TC = O(N)+O(N)  SC= O(N)
       vector<int> pos;
       vector<int> neg;
        // Separate positive and negative numbers
        for (int x : nums) {
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }
        for(int i = 0 ; i < nums.size()/2 ; i++ ){
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];          
        }  
        return nums; */
   
      //OPTIMAL SOLUTION
      int n = nums.size();
      vector<int> ans(n , 0 );
      int posIndex = 0 , negIndex = 1 ;

      for(int i = 0; i < n ; i++){
        if(nums[i]<0){
            ans[negIndex] = nums[i];
            negIndex += 2 ;
        } else {
            ans[posIndex] = nums[i];
            posIndex += 2 ;

        }
      }
    return ans ;

    }
};