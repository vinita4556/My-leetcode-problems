/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    public:

    int binarySearch(MountainArray &mountainArr, int target, int start, int end, bool isAsc) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int value = mountainArr.get(mid);

            if (value == target)
                return mid;

            if (isAsc) {
                if (target < value)
                    end = mid - 1;
                else
                    start = mid + 1;
            } else {
                if (target < value)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        // Find peak
        int start = 0;
        int end = mountainArr.length() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (mountainArr.get(mid) > mountainArr.get(mid + 1))
                end = mid;
            else
                start = mid + 1;
        }

        int peak = start;

        // Search in ascending part
        int ans = binarySearch(mountainArr, target, 0, peak, true);

        if (ans != -1)
            return ans;

        // Search in descending part
        return binarySearch(mountainArr, target, peak + 1, mountainArr.length() - 1, false);
    }
};
