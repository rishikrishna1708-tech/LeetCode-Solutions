/*
Problem: 292. Nim Game

Approach:
In Nim Game, if the number of stones is a multiple of 4,
the first player will lose assuming optimal play.
Otherwise, the first player can always win.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

bool canWinNim(int a) {
  return (a%4==0)?false:true;
}
