/*
Problem: 169. Majority Element

Approach:
Used Moore’s Voting Algorithm.
Cancel out different elements pairwise. 
The remaining candidate will be the majority element.

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int majorityElement(int* nums, int numsSize) {
    int count=0;
    int can=0;

    for(int i=0;i<numsSize;i++) {

        if(count==0) {
            can=nums[i];
        }

        if(nums[i]==can)
            count++;
        else
            count--;
    }

    return can;
}
