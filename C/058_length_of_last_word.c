/*
Problem: 58. Length of Last Word

Approach:
Traverse the string and track the current word length.
Reset length on space and store last non-zero length.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int lengthOfLastWord(char* s) {
    int l=0,l1=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
l++;l1=l;
        }
        else
        {
            l=0;
        }    
    }
    return l1;
}
