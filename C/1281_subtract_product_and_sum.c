/*
Problem: 1281. Subtract the Product and Sum of Digits of an Integer

Approach:
Extract each digit using modulo (%10).
Multiply digits to get product and add digits to get sum.
Return the difference between product and sum.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

int subtractProductAndSum(int n) {
    int pro=1;
    int sum=0;
    
    while(n>0)
    {
        int digit = n%10;
        pro=pro *digit;
        sum=sum+digit;
        n=n/10;
    }
    
    return pro-sum;
}
