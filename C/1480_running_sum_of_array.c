/*
Problem: 1480. Running Sum of 1d Array

Approach:
Create a new array and build prefix sum.
Each element is sum of all previous elements.

Time Complexity: O(n)
Space Complexity: O(n)

Language: C
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    int *result=(int*)malloc(numsSize*sizeof(int));
    
    result[0]=nums[0];
    
    for(int i=1;i<numsSize;i++)
    {
        result[i]=result[i-1]+nums[i];
    }
    
    *returnSize=numsSize;
    return result;
}

