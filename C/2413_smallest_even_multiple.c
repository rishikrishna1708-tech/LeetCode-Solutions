/*
Problem: 2413. Smallest Even Multiple

Approach:
If n is even, return n.
If n is odd, return 2*n.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : 2 * n;
}
