#include <vector>
using namespace std;
class Solution {
    private:
    void quickSort(vector<int>& nums, int left, int right) {

        // Base case
        if (left >= right) {
            return;
        }

        // Middle element as pivot
        int pivotIndex = left + (right - left) / 2;
        int pivotValue = nums[pivotIndex];

        int i = left;
        int j = right;

        // Partition
        while (i <= j) {

            if (nums[i] < pivotValue) {
                i++;
            }
            else if (nums[j] > pivotValue) {
                j--;
            }
            else {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        // Recursively sort left and right parts
        if (left < j) {
            quickSort(nums, left, j);
        }

        if (i < right) {
            quickSort(nums, i, right);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {

        quickSort(nums, 0, nums.size() - 1);

        return nums;
    }
};