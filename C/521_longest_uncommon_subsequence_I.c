/*
Problem: 521. Longest Uncommon Subsequence I

Approach:
If both strings are equal, no uncommon subsequence exists → return -1.
Otherwise, the longer string itself is the longest uncommon subsequence.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

#include <string.h>

int findLUSlength(char* a, char* b) {
    
    int len1= strlen(a);
    int len2= strlen(b);
    
    if(strcmp(a, b) == 0) {
        return -1;
    }
    
    if(len1 > len2)  return len1;
    else return len2;
}
