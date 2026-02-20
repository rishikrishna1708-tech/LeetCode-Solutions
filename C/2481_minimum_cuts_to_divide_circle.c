/*
Problem: 2481. Minimum Cuts to Divide a Circle

Approach:
If n = 1 → 0 cuts needed.
If n is even → n/2 cuts.
If n is odd → n cuts.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

int numberOfCuts(int a) {
    return (a%2==0||a==1)?a/2:a;
}
