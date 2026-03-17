/*
Problem: 2828. Check if a String Is an Acronym of Words

Approach:
1. If length of string s is not equal to number of words, return false.
2. For each word, compare its first character with corresponding character in s.
3. If any mismatch occurs, return false.
4. If all match, return true.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

#include<string.h>
bool isAcronym(char** words, int wordsSize, char* s) {
    if(strlen(s)!=wordsSize)return false;
    
 for(int i=0;i<wordsSize;i++)
{
    if(words[i][0]!=s[i])return false;
}
return true;
}
