/*
Problem: 344. Reverse String

Approach:
Used two-pointer technique to swap characters from start and end
until both pointers meet.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/
void reverseString(char* s, int sSize) {
    int i=sSize-1;
    int j=0;
    while(j<i)
    {
     char temp=s[j];
     s[j]=s[i];
     s[i]=temp;
     j++;
     i--;
    }
}
