/*
Problem: 367. Valid Perfect Square

Approach:
Used binary search to find an integer whose square equals the given number.
Used long type to prevent overflow during multiplication.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

bool isPerfectSquare(int num) {
    if (num < 1) return false;
    long left = 1, right = num;
    while (left <= right) {
        long mid = left + (right - left) / 2;
        long sq = mid * mid;
        if (sq == num)
            return true;
        else if (sq < num)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}
