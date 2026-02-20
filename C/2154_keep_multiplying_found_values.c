/*
Problem: 2154. Keep Multiplying Found Values by Two

Approach:
Repeatedly check if original exists in the array.
If found, double it and continue.
Stop when original is not found.

Time Complexity: O(n * k)  (k = number of doublings)
Space Complexity: O(1)

Language: C
*/

int findFinalValue(int* nums, int numsSize, int original) {
    int found = 1;

    while (found) {
        found = 0;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == original) {
                original = original*2;
                found = 1;
                break;
            }
        }
    }
    return original;
}
