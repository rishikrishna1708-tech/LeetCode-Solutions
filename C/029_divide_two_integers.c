/*
Problem: 29. Divide Two Integers
Approach: Handle overflow cases and use safe division

Edge cases handled:
- Division by zero
- INT_MIN divided by -1 overflow case

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

#include<limits.h>
int divide(int dividend, int divisor) {
    if(divisor==0)return INT_MAX;
    if(dividend==INT_MIN && divisor==-1)return INT_MAX;
    return dividend/divisor;
}
