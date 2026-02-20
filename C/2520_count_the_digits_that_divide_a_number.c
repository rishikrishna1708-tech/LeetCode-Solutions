/*
Problem: 2520. Count the Digits That Divide a Number

Approach:
Extract each digit and check if it divides the original number.
Count digits that divide the number evenly.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

int countDigits(int num) {
    int t=num;
    int r=0;
   while(num!=0)
   {
    int k=num%10;
    if(t%k==0)r++;
    num=num/10;
   } 
   return r;
}
