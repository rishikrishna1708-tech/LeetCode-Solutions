/*
Problem: 2824. Count Pairs Whose Sum is Less than Target

Approach:
1. Iterate through all pairs using two loops.
2. For each pair (i, j) where i < j:
   - Check if nums[i] + nums[j] < target.
3. If yes, increment the count.
4. Return the total count.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

int countPairs(int* nums, int numsSize, int target) {
    
    int count = 0;
    for(int i=0;i<numsSize;i++) {
        for(int j=i+1;j<numsSize;j++) {
            
            if(nums[i]+nums[j]<target)
                count++;
        }
    }
    return count;
}
