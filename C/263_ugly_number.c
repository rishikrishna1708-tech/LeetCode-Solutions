/*
Problem: 263. Ugly Number

Approach:
Repeatedly divide the number by 2, 3, and 5.
If the number reduces to 1, it is an ugly number.
If another factor appears, return false.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

bool isUgly(int n) {
    if(n<=0)return false;
   while(n>1)
   {
    if(n%2==0)n=n/2;
    else if(n%3==0)n=n/3;
    else if(n%5==0)n=n/5;
    else{
        return false;
    }
   } 
    return true;
}
