/*
Problem: 35. Search Insert Position
Approach: Binary Search

Explanation:
We use binary search to find the target element.
If found, return its index.
If not found, return the position where it should be inserted.

Time Complexity: O(log n)
Space Complexity: O(1)

Language: C
*/

int searchInsert(int* nums, int numsSize, int target) {
    int min=0;
    int max=numsSize-1;
        
   while(min<=max) { 
       int cen=(min+max)/2;
       if(nums[cen]==target)return cen;
      else if(target<nums[cen])  {
        max=cen-1;
      }
      else
      {
        min=cen+1;
      }
    }return min;
}
