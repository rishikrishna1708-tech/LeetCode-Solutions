/*
Problem: 258. Add Digits

Approach:
Repeatedly sum digits of the number until a single digit remains.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

int addDigits(int a) {
    int b;
    while(a>=10)
    { b=0;
        while(a>0){
        b=b+a%10;
        a=a/10;}a=b;
    }return a;
}
