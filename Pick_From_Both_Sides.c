/*Given an integer array A of size N.

You can pick B elements from either left or right end of the array A to get maximum sum.

Find and return this maximum possible sum.

NOTE: Suppose B = 4 and array A contains 10 elements then

You can pick first four elements or can pick last four elements or can pick 1 from front and 3 from back etc . you need to return the maximum possible sum of elements you can pick.

Example Input
Input 1:

 A = [5, -2, 3 , 1, 2]
 B = 3
Input 2:

 A = [1, 2]
 B = 1


Example Output
Output 1:

 8
Output 2:

 2

 */

int solve(int *A, int n1, int B)
{
    int i, sum = 0, sum2 = 0;
    for (i = 0; i < B; i++)
    {
        sum += A[i];
    }
    sum2 = sum;
    for (i = 0; i < B; i++)
    {
        sum2 -= A[B - 1 - i];
        sum2 += A[n1 - 1 - i];
        if (sum2 > sum)
            sum = sum2;
    }

    return sum;
}