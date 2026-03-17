/*
Problem: 1668. Maximum Repeating Substring

Approach:
1. Traverse each index of the sequence as a starting point.
2. Try to match the given word continuously from that position.
3. Count how many times the word repeats consecutively.
4. Track the maximum repetition count.

Time Complexity: O(n * m * k)
- n = length of sequence
- m = length of word
- k = number of repetitions

Space Complexity: O(1)

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
