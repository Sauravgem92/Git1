/*
Rearrange an array so that arr[i] becomes arr[arr[i]] with O(1) extra space
Difficulty Level : Hard
Last Updated : 07 Jul, 2021
Given an array arr[] of size n where every element is in range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]]. This should be done with O(1) extra space.

Examples: 

Input: arr[]  = {3, 2, 0, 1}
Output: arr[] = {1, 0, 3, 2}
Explanation: 
In the given array 
arr[arr[0]] is 1 so arr[0] in output array is 1
arr[arr[1]] is 0 so arr[1] in output array is 0
arr[arr[2]] is 3 so arr[2] in output array is 3
arr[arr[3]] is 2 so arr[3] in output array is 2

Input: arr[] = {4, 0, 2, 1, 3}
Output: arr[] = {3, 4, 2, 0, 1}
Explanation:
arr[arr[0]] is 3 so arr[0] in output array is 3
arr[arr[1]] is 4 so arr[1] in output array is 4
arr[arr[2]] is 2 so arr[2] in output array is 2
arr[arr[3]] is 0 so arr[3] in output array is 0
arr[arr[4]] is 1 so arr[4] in output array is 1

Input: arr[] = {0, 1, 2, 3}
Output: arr[] = {0, 1, 2, 3}
Explanation:
arr[arr[0]] is 0 so arr[0] in output array is 0
arr[arr[1]] is 1 so arr[1] in output array is 1
arr[arr[2]] is 2 so arr[2] in output array is 2
arr[arr[3]] is 3 so arr[3] in output array is 3
If the extra space condition is removed, the question becomes very easy. The main part of the question is to do it without extra space.  
*/

#include <iostream>
using namespace std;

// The function to rearrange an array
// in-place so that arr[i] becomes arr[arr[i]].
void rearrange(int arr[], int n)
{
    // First step: Increase all values by (arr[arr[i]]%n)*n
    for (int i = 0; i < n; i++)
        arr[i] += (arr[arr[i]] % n) * n;

    // Second Step: Divide all values by n
    for (int i = 0; i < n; i++)
        arr[i] /= n;
}


int main()
{
    int arr[] = {3, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    cout << "Modified array is \n";

     for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}