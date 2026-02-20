/*
Problem: Trionic Array Check

Approach:
Traverse array in three phases:
1. Strictly increasing
2. Strictly decreasing
3. Strictly increasing again
Return true only if all three phases are present.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

bool isTrionic(int* nums, int numsSize) {
    if (numsSize<3) return false;
    int i=1;
    while(i<numsSize&&nums[i]>nums[i-1])i++;
    if(i==numsSize || i==1)return false;
    while(i<numsSize&&nums[i]<nums[i-1])i++;
    if(i==numsSize)return false;
    while(i<numsSize&&nums[i]>nums[i-1])i++;
    if(i==numsSize)return true;
    else return false;
}
