/*
Problem: 1502. Can Make Arithmetic Progression From Sequence

Approach:
Sort the array and check if the difference between consecutive
elements is constant.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

#include <stdbool.h>

bool canMakeArithmeticProgression(int* arr, int arrSize) {

    if (arrSize < 2)
        return true;
    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int eql = arr[1] - arr[0];

    for (int i = 1; i < arrSize - 1; i++) {
        if (arr[i + 1] - arr[i] != eql)
            return false;
    }

    return true;
}
