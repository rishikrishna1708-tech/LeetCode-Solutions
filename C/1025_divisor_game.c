/*
Problem: 1025. Divisor Game

Approach:
Game theory observation:
If n is even, Alice can always force a win.
If n is odd, Alice will lose.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

bool divisorGame(int a) {
    return (a%2==0)?true:false;
    }
    
