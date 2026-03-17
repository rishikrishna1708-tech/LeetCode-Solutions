/*
Problem: 628. Maximum Product of Three Numbers

Approach:
1. Sort the array using qsort.
2. The maximum product can come from:
   - The product of the three largest numbers
   - OR the product of the two smallest (negative) numbers and the largest number
3. Return the maximum of these two cases.

Time Complexity: O(n log n) 
Space Complexity: O(1) 

Language: C
*/

int cmp(const void*a,const void*b)
{
    int x=*(int*)a;
    int y=*(int*)b;
    return x-y;
}
int maximumProduct(int* nums, int numsSize) {
    
    qsort(nums,numsSize,sizeof(int),cmp);
    int s=numsSize;
    int max=nums[s-1]*nums[s-2]*nums[s-3];
    int expmax=nums[0]*nums[1]*nums[s-1];
    return max>expmax ? max : expmax;
}
