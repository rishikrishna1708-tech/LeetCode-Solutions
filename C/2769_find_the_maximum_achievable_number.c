/*
Problem: 2769. Find the Maximum Achievable Number

Approach:
1. Each operation increases num by 1 and decreases t by 1 (or vice versa).
2. In total, you can perform t operations.
3. Each operation effectively increases num by 2.
4. So, maximum achievable value = num + 2 * t.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

int theMaximumAchievableX(int num, int t) {
  return num + 2*t; 
}
