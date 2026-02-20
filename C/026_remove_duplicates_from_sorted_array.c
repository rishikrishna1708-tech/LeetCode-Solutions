/*
Problem: 26. Remove Duplicates from Sorted Array

Approach:
Since array is sorted, duplicates are adjacent.
Copy unique elements forward and return the new length.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int k = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            nums[k] = nums[i];
            k++;
        }
    }nums[k] = nums[numsSize - 1];
    k++;
    return k;
}
