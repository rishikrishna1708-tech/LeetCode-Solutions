/*
Problem: 771. Jewels and Stones

Approach:
1. For each character in jewels, check all characters in stones.
2. If a match is found, increment the count.
3. Return the total number of matching characters.

Time Complexity: O(n * m)
Space Complexity: O(1)

Language: C
*/

int numJewelsInStones(char* jewels, char* stones) {
    int nos=0;
    for(int i=0;jewels[i]!='\0';i++)
    {
        for(int j=0;stones[j]!='\0';j++)
        {
            if(jewels[i]==stones[j])nos++;
        }
    }
    return nos;
    }
