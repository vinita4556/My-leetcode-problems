class Solution {
public: 
        // write a function
        int findDays(vector<int> &weights, int capacity){
            int days = 1; 
            int load = 0;
            //loop
            for(int i =0; i<weights.size();i++){
            if(weights[i] + load > capacity){
                days ++;
                load = weights[i];
            }
            else{
                 load += weights[i];
            }      
    }
    return days;
}
int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while(low<=high){
        int mid = low+(high-low) / 2;
        //call a function
        int numberofDays = findDays(weights, mid);
        if(numberofDays <= days){
            high = mid-1;
        }else {
            low = mid+1;
        }
    }
    return low;
}
};