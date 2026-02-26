/*
Approach:
Check if '+' appears in operation string.
If yes → increment x, else decrement x.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int finalValueAfterOperations(char** operations, int operationsSize) {
    
    int x=0;
    for(int i=0;i<operationsSize;i++)
    {
        if(operations[i][0]=='+' || operations[i][2]=='+')
            x++;
        else
            x--;
    }
    
    return x;
}
