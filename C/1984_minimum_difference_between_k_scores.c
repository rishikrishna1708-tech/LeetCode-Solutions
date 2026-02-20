/*
Problem: 1984. Minimum Difference Between Highest and Lowest of K Scores

Approach:
Sort array in descending order and compute difference between
elements of each window of size k.

Time Complexity: O(n^2)
Space Complexity: O(1)

Language: C
*/

int minimumDifference(int* nums, int numsSize, int k) {
    if(numsSize<=1)return 0;
    int temp;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]<nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    int minD=nums[0]-nums[k-1];

    for(int i=1;i<=numsSize-k;i++){
        int diff=nums[i]-nums[i+k-1];
        if(diff<minD)
            minD=diff;
    }
    return minD;  
}
