/*Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

Example

Input : 4
Output : True  
as 2^2 = 4. 

for 8=2^3 :True
for 9=3^2 :True
for 5=  :False
for 10=  :False
*/

int Solution::isPower(int A)
{
    double l;

    if (A == 1)
    {

        return 1;
    }

    for (int i = 2; i * i <= A; i++)
    {

        int b = A;

        while (b % i == 0)
        {

            b /= i;
        }

        if (b == 1)
            return (1);
    }

    return 0;
}