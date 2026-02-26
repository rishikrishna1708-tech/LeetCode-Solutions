/*
Problem: 1512. Number of Good Pairs

Approach:
Use nested loops to check all pairs (i < j).
If nums[i] == nums[j], increment count.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

int numIdenticalPairs(int* nums, int numsSize) {
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
          if(nums[i] == nums[j])
          {
               k++;
          }
    }
    return k;
}
