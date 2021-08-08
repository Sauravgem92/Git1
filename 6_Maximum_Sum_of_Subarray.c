/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:
Input: nums = [1]
Output: 1

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
*/
#include<stdio.h>
int maxSubArray(int *nums, int numsSize)
{
    int i, sum = 0;
    int max = INT_MIN;

    for (i = 0; i < numsSize; i++)
    {
        if (sum >= 0)
            sum += nums[i];
        else
            sum = nums[i];

        if (sum > max)
            max = sum;
    }
    return max;
}