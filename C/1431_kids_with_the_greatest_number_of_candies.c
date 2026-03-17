/*
Problem: 1431. Kids With the Greatest Number of Candies

Approach:
1. Find the maximum number of candies among all kids.
2. For each kid, check if adding extraCandies makes their total
   greater than or equal to the maximum.
3. Store the result (true/false) in a boolean array.

Time Complexity: O(n)
Space Complexity: O(n) 

Language: C
*/

int maxRepeating(char* sequence, char* word) {
    int substring=0;
    for(int i=0;sequence[i]!='\0';i++)
    {
        int count=0;
        int pos=i;
        while(1)
        {
            int j;
            for(j=0;word[j]!='\0';j++)
            {
             if(sequence[pos+j]!=word[j])
                    break;
         }
            if(word[j]=='\0')
            {
                count++;
                pos+=j;
            }
            else
                break;
        }
if(count>substring)
            substring=count;
    }
    return substring;
}
