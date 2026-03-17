/*
Problem: 1678. Goal Parser Interpretation

Approach:
1. Traverse the input string character by character.
2. If 'G' → append 'G' to result.
3. If "()" → append 'o'.
4. If "(al)" → append "al".
5. Build the result string dynamically and return it.

Time Complexity: O(n)
Space Complexity: O(n)

Language: C
*/

#include <stdlib.h>

char * interpret(char * command){

    char *res=(char*)malloc(100*sizeof(char));
    int i=0,j=0;

    while(command[i]!='\0')
    {
        if(command[i]=='G')
        {
            res[j]='G';j++;
            i++;
        }
        else if(command[i]=='('&&command[i+1]==')')
        {
            res[j++] = 'o';
            i += 2;
        }
        else
        {
            res[j]='a';j++;
            res[j]='l';j++;
            i+=4;
        }
    }
    res[j]='\0';
    return res;
}
