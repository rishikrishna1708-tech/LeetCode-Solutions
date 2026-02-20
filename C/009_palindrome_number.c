/*
Problem: 9. Palindrome Number

Approach:
Reverse the integer and compare with original number.
If both are equal, it is a palindrome.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

bool isPalindrome(int x) {
    if (x < 0) return false;
    long  a = 0;
    int b = x;
    while (x != 0) {
        a = a * 10 + x % 10;
        x /= 10;
    }

    return a == b;
}
