/*
Problem: 709. To Lower Case

Approach:
Traverse the string and convert uppercase characters to lowercase
using ASCII difference (32).

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

char* toLowerCase(char* s) {
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]+32;i++;
    }
    return s;
}

