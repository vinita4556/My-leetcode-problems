#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
        int add(int a, int b){
            int sum = a+b;
            return sum;
        }

      vector<int> twoSum(vector<int>& nums, int target){
       unordered_map<int, int> numMap;
       for (int i = 0; i < nums.size(); i++){
           int complement = target - nums[i];
           if (numMap.count(complement)) {
               return {numMap[complement], i};
           }
           numMap[nums[i]] = i;
       }
       return{};
    } 
};
int main() {
    Solution s;
    vector<int> nums = {2, 7 , 11 , 15};
    vector<int> result = s.twoSum(nums, 9);

    cout << result[0] << " " << result[1];
    return 0;
}