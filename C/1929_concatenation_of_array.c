/*
Problem: 1929. Concatenation of Array

Approach:
1. Create a new array of size 2 * numsSize.
2. Copy the original array twice:
   - First half → nums[i]
   - Second half → nums[i] again at index i + numsSize
3. Return the new array.

Time Complexity: O(n)
Space Complexity: O(n)

Language: C
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *p=(int*)malloc(2*numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        p[i]=nums[i];
        p[i+numsSize]=nums[i];
    }
    *returnSize=2*numsSize;
    return p;
}
