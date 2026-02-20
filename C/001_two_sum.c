/*
Problem: 1. Two Sum

Approach:
Used brute-force nested loops to check all pairs.
When sum equals target, return indices.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *p=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++){ 
        if(nums[i]+nums[j]==target)
        {
            p[0]=i;
            p[1]=j;
            *returnSize=2;
            return p;
        }
    }}
    free(p);
    *returnSize=0;
    return NULL;
}
