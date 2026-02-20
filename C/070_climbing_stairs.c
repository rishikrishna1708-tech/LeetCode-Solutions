/*Problem: 70. Climbing Stairs

Approach:
Number of ways follows Fibonacci pattern.
Used two variables to store previous two results
for space optimization.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

  int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
