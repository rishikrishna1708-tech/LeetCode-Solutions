/*
Problem: 136. Single Number

Approach:
Used XOR operation to cancel duplicate elements.
Since a^a = 0 and a^0 = a, only the unique element remains.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int singleNumber(int* nums, int numsSize) {
    int ans=0;

    for (int i = 0; i < numsSize; i++) {
            ans=ans^nums[i];
        }
    return ans;
}
