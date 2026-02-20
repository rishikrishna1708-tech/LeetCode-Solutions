/*
Problem: 7. Reverse Integer

Approach:
Extract digits using modulo and build reversed number.
Used long long to safely detect overflow.
Return 0 if reversed value exceeds 32-bit integer range.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

#include<limits.h>
int reverse(int x) {
    long long  a= 0;
    while (x != 0) {
    a = a * 10 + x%10;
        x = x / 10; 
    }
    if (a>INT_MAX||a<INT_MIN)return 0;
    return a;
}
