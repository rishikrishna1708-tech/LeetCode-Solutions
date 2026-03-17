/*
Problem: 1470. Shuffle the Array

Approach:
1. The array is given as [x1, x2, ..., xn, y1, y2, ..., yn].
2. Create a new array and interleave elements:
   [x1, y1, x2, y2, ..., xn, yn].
3. Use a pointer (k) to fill the result array.

Time Complexity: O(n)
Space Complexity: O(n)

Language: C
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){

    int *p=(int*)malloc(numsSize*sizeof(int));
    int k=0;
    for(int i=0;i<n;i++)
    {
        p[k]=nums[i];
        k++;
        p[k]=nums[i+n];
        k++;
    }
    *returnSize=numsSize;
    return p;
}
