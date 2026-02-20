/*
Problem: 3. Longest Substring Without Repeating Characters

Approach:
Start from each index and extend substring until a duplicate character appears.
Track visited characters using a frequency array.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

int lengthOfLongestSubstring(char* s) {

    int max= 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int seen[256] = {0};
        int len = 0;

        for (int j = i; s[j] != '\0'; j++) {
            if (seen[s[j]]==1){ 
                break;}
            else{ 
            seen[s[j]] = 1;
            len++; }
        }

        if (len > max)
            max = len;
    }
    return max;
}
