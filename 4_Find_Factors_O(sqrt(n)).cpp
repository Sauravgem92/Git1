/*Given a number N, find all factors of N.

Example:

N = 6 
factors = {1, 2, 3, 6}
Make sure the returned array is sorted.
*/

vector<int> Solution::allFactors(int A)
{
    vector<int> ret;

    for (int i = 1; i < sqrt(A); i++)
    {

        if (A % i == 0)
            ret.push_back(i);
    }

    for (int i = sqrt(A); i >= 1; i--)
    {

        if (A % i == 0)
            ret.push_back(A / i);
    }

    return ret;
}