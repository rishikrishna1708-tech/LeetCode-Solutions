/*
Problem: 2894. Divisible and Non-divisible Sums Difference

Approach:
Iterate from 1 to n.
Add numbers divisible by m into one sum and others into another sum.
Return the difference between non-divisible and divisible sums.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int differenceOfSums(int n, int m) {

    int sum = 0;
    int sumN = 0;
    for(int i=1;i<=n;i++)
    {
        if(i%m==0)
            sum+=i;
        else
            sumN+=i;
    }

    return sumN-sum;
}
