/*
Problem: 283. Move Zeroes

Approach:
Traverse the array and move all non-zero elements to the front.
Then fill remaining positions with zeros to maintain array size.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

void moveZeroes(int* nums, int numsSize) {
    int j = 0;
    for(int i=0;i<numsSize;i++) {
        if(nums[i]!=0) {
            nums[j]=nums[i];
            j++;
        }
    }
    while(j<numsSize) {
        nums[j] = 0;
        j++;
    }
}
