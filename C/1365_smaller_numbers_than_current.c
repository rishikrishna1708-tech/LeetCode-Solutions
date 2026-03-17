/*
Problem: 1365. How Many Numbers Are Smaller Than the Current Number

Approach:
1. For each element, count how many numbers in the array are smaller than it.
2. Use nested loops to compare each pair.
3. Store the count in the result array.

Time Complexity: O(n^2)
Space Complexity: O(n)

Language: C
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *res = (int*)malloc(numsSize * sizeof(int));
    int j;
    for(int i=0;i<numsSize;i++)
    {
        j=0;
        for(int k=0;k<numsSize;k++)
        {
            if(nums[i]>nums[k])
            {
                j++;
            }
        } res[i]=j;
    }
    * returnSize=numsSize;
    return res;
}
