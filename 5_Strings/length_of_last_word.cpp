/* Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Given s = "Hello World",

return 5 as length("World") = 5.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.

*/

int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int bc, n=A.length(), count=0;
    if(A[n-1]==' ')
    {
        for(int i=n-1; i>=0; i--)
        {
            if(A[i]==' ')
                continue;
            else
            {
                bc=i;
                break;
            }
        }
        for(int j=bc; A[j]!=' ' && j>=0; j--)
        {
            count++;
        }
    }
    else
    {
        for(int k=n-1; A[k]!=' ' && k>=0; k--)
        {
            count++;
        }
    }
    return(count);
}
