/*
Problem: 441. Arranging Coins

Approach:
Simulated forming rows of coins. 
Each row requires one more coin than the previous.
Stop when coins are insufficient.

Time Complexity: O(√n)
Space Complexity: O(1)

Language: C
*/

int arrangeCoins(int n) {
    long long row = 0;
    long long used = 0;
while (used+row+1<=n) {
        row++;
        used+= row;
    }
    return row;
}
