/*
Problem: 2678. Number of Senior Citizens

Approach:
1. Each string contains passenger details where age is at index 11 and 12.
2. Extract age using:
   age = (details[i][11] - '0') * 10 + (details[i][12] - '0')
3. If age > 60, increment the count.
4. Return the total count.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int countSeniors(char** details, int detailsSize) {
    
    int count = 0;int age;
    for(int i=0;i<detailsSize;i++) {
        
        age = (details[i][11]-'0')*10 + (details[i][12] - '0');
        
        if(age>60)
            count++;
    }
    return count;
}
