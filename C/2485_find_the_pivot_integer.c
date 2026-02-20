/*
Problem: 2485. Find the Pivot Integer

Approach:
Compute total sum from 1 to n.
Traverse and maintain prefix sum.
If prefix sum equals suffix sum, return pivot.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int pivotInteger(int n) {
    int tot= n * (n + 1) / 2;
    int a= 0;

    for (int x = 1; x <= n; x++) {
        a=a+x;
        if (a== tot-a+ x)
            return x;
    }

    return -1;
}
