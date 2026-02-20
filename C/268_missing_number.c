/*
Problem: 268. Missing Number

Approach:
For every number from 0 to n, check whether it exists in the array.
If a number is not found during traversal, return that number as the missing value.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int j;
    while(i<=numsSize)
    {j = 0;
        for(int k=0;k<numsSize;k++)
        {if(nums[k]==i)
            {    j = 1;
                break;
            }
        }
        if(j==0)
        {
            return i;
        }i++;
    }
    return -1;
}

