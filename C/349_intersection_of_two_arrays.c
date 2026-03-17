/*
Problem: 349. Intersection of Two Arrays

Approach:
1. Use a frequency array to track elements already added to the result.
2. For each element in nums1, check if it exists in nums2.
3. If found and not already included (freq check), add it to result.
4. Mark it in freq array to avoid duplicates.

Time Complexity: O(n * m)
Space Complexity: O(1)

Language: C
*/

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *p=(int*)malloc(nums1Size * sizeof(int));
    int re=0;
    int freq[1001]={0};
    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j] && freq[nums1[i]]==0)
            {
                p[re]=nums1[i];
                freq[nums1[i]]=1;
                re++;
                break;
            }
        }
    }
    *returnSize=re;
    return p;
}
