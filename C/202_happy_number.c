/*
Problem: 202. Happy Number

Approach: Repeatedly replace the number with the sum of squares of its digits.
If the number becomes 1 → Happy number.
If it enters a loop (detected using 4) → Not a happy number.

Edge cases handled:
- Single digit numbers
- Cycle detection using 4

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

bool isHappy(int n) {
    while(n!=1&&n!=4)
    {
        int sum=0;
        while(n>0)
        {
            int digit = n % 10;
            sum=sum+(digit*digit);
            n/=10;
        }
        n=sum;
    }
    if(n==1)return true;
    else return false;
}
