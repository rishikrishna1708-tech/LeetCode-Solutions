/*
Problem: 565. Array Nesting

Approach:
Traverse cycles starting from each index.
Mark visited elements as -1 to avoid revisiting.
Track the maximum cycle length.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int arrayNesting(int* nums, int numsSize) {
    int hlen=0;
    for(int i=0;i<numsSize;i++)
    {
       int crr=i;
       int len=0;
       while(nums[crr]!=-1)
       {
        int next=nums[crr];
        nums[crr]=-1;
        crr=next;
        len++;
       }
       if(len>hlen)hlen=len;

    }
    return hlen;

}
