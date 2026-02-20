/*
Problem: 20. Valid Parentheses

Approach:
Used stack to store opening brackets.
When a closing bracket appears, check if it matches
the most recent opening bracket.

Time Complexity: O(n)
Space Complexity: O(n)

Language: C
*/

#include<string.h>
bool isValid(char* s) {
    int n=strlen(s);
    char fre[n];int p=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(' )
        {
           p++;
            fre[p]=s[i];
        }
        else{
            if(p==-1)return false;
            char close=fre[p];p--;
            if(close=='[' && s[i]!=']' ||close=='{' && s[i]!='}'||close=='(' && s[i]!=')' )
            {
             return false;
            } }
} if(p==-1)return true;
else return false;}

