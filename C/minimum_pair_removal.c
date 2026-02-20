/*
Problem: Minimum Pair Removal to Make Array Sorted

Approach:
Repeatedly find adjacent pair with minimum sum,
merge them into one element, and shift array left.
Continue until array becomes sorted.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

int isSorted(int* nums, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1])
            return 0;
    }return 1;
}
int minimumPairRemoval(int* nums, int numsSize) {
    int op = 0;
    while (isSorted(nums, numsSize) == 0) {
        int minsum = nums[0] + nums[1];
        int ix = 0;
        for (int i = 1; i < numsSize - 1; i++) {int sum = nums[i] + nums[i + 1];
            if (sum < minsum) {
                minsum = sum;ix = i;
            }
        }
        nums[ix] = minsum;
        for (int i = ix + 1; i < numsSize - 1; i++) {nums[i] = nums[i + 1]; }
 numsSize--;op++;}
    return op;
}
