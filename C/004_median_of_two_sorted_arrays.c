/*
Problem: 4. Median of Two Sorted Arrays

Approach:
Merged both sorted arrays into a single array
and computed the median from the merged array.

Time Complexity: O(n + m)
Space Complexity: O(n + m)

Language: C
*/


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {int tot=nums1Size+nums2Size;
int a[tot],i=0,j=0,k=0;
while(i<nums1Size && j<nums2Size)
{
    if(nums1[i]<=nums2[j])
   { a[k]=nums1[i];
    k++;
    i++;}
    else
    {
        a[k]=nums2[j];
        k++;j++;
    }
}
while (i<nums1Size)
{
    a[k]=nums1[i];i++;k++;
}
while(j<nums2Size)
{
    a[k]=nums2[j];k++;j++;
}


    if(tot%2==1)
    {
        return a[tot/2]*1.0;
    }
    else
    {
        return (a[tot/2]+a[(tot/2)-1])/2.0;
    }


}
