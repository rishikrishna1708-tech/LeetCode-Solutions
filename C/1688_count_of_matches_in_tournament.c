/*
Problem: 1688. Count of Matches in Tournament

Approach:
Each match eliminates one team.
To determine a winner from n teams, n-1 matches are required.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/



int numberOfMatches(int n){
    return n-1;

}
