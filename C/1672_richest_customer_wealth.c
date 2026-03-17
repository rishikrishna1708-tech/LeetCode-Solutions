/*
Problem: 1672. Richest Customer Wealth

Approach:
1. For each customer (row), calculate the total wealth by summing all accounts.
2. Track the maximum wealth among all customers.
3. Return the maximum value.

Time Complexity: O(m * n)
Space Complexity: O(1)

Language: C
*/

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {

    int max=0;
    for(int i=0;i<accountsSize;i++)
    {
        int sum=0;
        for(int j=0;j<accountsColSize[i];j++)
        {
            sum+=accounts[i][j];
        if(sum>max)
            max=sum;
    }}
    return max;
}

