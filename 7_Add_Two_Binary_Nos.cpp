/*
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/

class Solution {
public:
    string addBinary(string a, string b) {
      
         int i = a.size()-1, j = b.size()-1;
    int carry = 0;
    string s = "";
    while (i >= 0 || j >= 0 || carry!=0) {
        if (i >= 0) {
            carry += a[i]=='0'?0:1;
            i--;
        }
        if (j >= 0) {
            carry += b[j]=='0'?0:1;
            j--;
        }
        s = ((carry%2)==0?"0":"1") + s; //(carry%2) means if sum is 2 then take 0 else 1
        carry /= 2;
    }
    return s;
    }
};