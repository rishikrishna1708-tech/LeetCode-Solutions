/*
Problem: 242. Valid Anagram

Approach:
Count character frequency of string s and subtract frequency of string t.
If all counts become zero, the strings are anagrams.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

#include<string.h>
bool isAnagram(char* s, char* t) {
if (strlen(s) != strlen(t)) {
        return false;
    }
int a[256]={0};
for(int i=0;s[i]!='\0';i++)
{
  a[s[i]]++;
}
for(int i=0;t[i]!='\0';i++)
{
    a[t[i]]--;
}
for(int i=0;s[i]!='\0';i++)
{
    if(a[s[i]]!=0)
    {
      return false;
    }
}
return true;
}
