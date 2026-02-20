/*
Problem: 2652. Sum Multiples

Approach:
Traverse numbers from 1 to n and add numbers divisible by 3, 5, or 7.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int sumOfMultiples(int n) {
    int sum=0;
    for(int i=3;i<=n;i++)
    {
        if(i%3==0||i%5==0||i%7==0)
        {
          sum+=i;
        }
    }return sum;
}
