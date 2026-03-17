/*
Problem: 1662. Check If Two String Arrays are Equivalent

Approach:
1. Use two pointers to traverse both string arrays.
2. Compare characters one by one across strings.
3. Move to next string when current string ends.
4. If any mismatch occurs, return false.
5. If both arrays are fully traversed, return true.

Time Complexity: O(n + m)
Space Complexity: O(1)

Language: C
*/

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int i=0;
    int j=0;
    int w1=0;
    int w2=0;
    while(i<word1Size && j<word2Size)
    {
        if(word1[i][w1]!=word2[j][w2])return false;
        w1++;
        w2++;
    if(word1[i][w1]=='\0')
    {i++;w1=0;
    }
        if(word2[j][w2]=='\0')
        {j++;w2=0;
        }
    }
    if(i == word1Size && j == word2Size)return true;
    else return false;

}
