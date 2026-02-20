/*
Problem: 55. Jump Game

Approach:
Used greedy method to track the farthest reachable index.
If at any point current index exceeds reachable index, return false.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

bool canJump(int* nums, int numsSize) {
    int max=0;
    for(int i=0;i<numsSize;i++) {

        if(i>max)
            return false;

        if(i+nums[i]>max){
            max= i+nums[i];}
    }
    return true;
}
