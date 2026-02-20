/*
Problem: 14. Longest Common Prefix

Approach:
Compare characters of all strings with the first string.
When mismatch occurs, terminate the prefix in the first string.

Time Complexity: O(n * m)
Space Complexity: O(1)

Language: C
*/

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
        return "";
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char ch = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != ch) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}
