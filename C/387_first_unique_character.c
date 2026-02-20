/*
Problem: 387. First Unique Character in a String

Approach:
Used frequency array to count occurrences of each character.
Then traversed again to find the first character with frequency 1.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/


int firstUniqChar(char* s) {
    int b[256]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        b[s[i]]=b[s[i]]+1;
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(b[s[i]]==1)
        {
            return i;
        }
    }
    return -1;
}
