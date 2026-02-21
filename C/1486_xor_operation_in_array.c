/*
Problem: 1486. XOR Operation in an Array

Approach:
Generate each element using (start + 2*i) and XOR all values.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int xorOperation(int n, int start) {
int result=0;
   for(int i=0;i<n;i++)
   {
     result^=(start+2*i);
   } return result;
}
