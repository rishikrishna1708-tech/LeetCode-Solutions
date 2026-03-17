/*
Problem: 1295. Find Numbers with Even Number of Digits

Approach:
1. For each number in the array:
   - Count the number of digits using division by 10.
2. If the digit count is even, increment the result.
3. Return the total count.

Time Complexity: O(n * d)  // d = number of digits
Space Complexity: O(1)

Language: C
*/

int findNumbers(int* nums, int numsSize) {
    int ed=0;
    for(int i=0;i<numsSize;i++)
    {

        int j=nums[i];
        int dig=0;
        while(j>0)
        {
          j=j/10;
          dig++;
        }
        if(dig%2==0)ed++;
    }
    return ed;
}
