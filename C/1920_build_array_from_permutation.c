/*
Problem: 1920. Build Array from Permutation

Approach:
1. Create a new array of the same size.
2. For each index i, set:
   result[i] = nums[nums[i]]
3. Return the constructed array.

Time Complexity: O(n)
Space Complexity: O(n)

Language: C
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *p=(int *)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        p[i]=nums[nums[i]];
    }
    *returnSize=numsSize;
    return p;
}
