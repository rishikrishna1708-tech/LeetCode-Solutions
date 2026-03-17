/*
Problem: 520. Detect Capital

Approach:
1. Count the number of uppercase letters in the word.
2. Valid cases:
   - All letters are uppercase (e.g., "USA")
   - All letters are lowercase (e.g., "leetcode")
   - Only the first letter is uppercase (e.g., "Google")
3. Check these conditions and return true if any match.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/


#include <string.h>
bool detectCapitalUse(char* word) {
    int len= strlen(word);
    int upper= 0;
    for(int i=0;i<len;i++)
    {
        if(word[i]>='A' && word[i]<='Z')
            upper++;
    }
    if(upper==len) return true;
    if(upper== 0) return true;
    if(upper==1 && word[0]>='A' && word[0]<='Z')return true;
    return false;
}
