class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0 ;
        int end = arr.size() - 1 ;

        while(start < end){
            int mid = start+(end-start)/2 ;
            if(arr[mid] > arr[mid+1])//you are in decreasing part
            {
                end = mid;
            }
            else{  //you are in increasing part
                start = mid+1;
            }
        }
        return start;
        
    }
};