/* Implement int sqrt(int x).

Compute and return the square root of x.

If x is not a perfect square, return floor(sqrt(x))

Example :

Input : 11
Output : 3
DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY */

int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int ans;
    if(A==0)
        return 0;
    else if(A==1)
        return(1);
    else
    {
        long long int start=1, end=A, j;
        while(start<=end)
        {
            j=(start+end)/2;
            if(j*j==A)
            {
                return j;
            }
            else if(j*j<A)
            {
                start=j+1;
                ans=j;
            }
            else
            {
                end=j-1;
            }
        }
    }
    return ans;
}
