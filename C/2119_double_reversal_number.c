/*
Problem: 2119. A Number After a Double Reversal

Approach:
If a number ends with 0, reversing removes the trailing zero,
so double reversal will not give the original number.
Exception: 0 itself.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

bool isSameAfterReversals(int a) {
    if (a == 0 || a % 10 != 0)
        return true;
    else
        return false;
}
