/*
Problem: 2651. Calculate Delayed Arrival Time

Approach:
Arrival time is simply (arrival + delay) modulo 24
to handle wrap-around of clock.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : 2 * n;
}
