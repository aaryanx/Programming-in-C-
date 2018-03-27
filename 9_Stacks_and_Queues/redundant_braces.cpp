/* Write a program to validate if the input string has redundant braces?
Return 0/1

0 -> NO
1 -> YES
Input will be always a valid expression

and operators allowed are only + , * , - , /

Example:

((a + b)) has redundant braces so answer will be 1
(a + (a + b)) doesn't have have any redundant braces so answer will be 0
*/

int Solution::braces(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<char> s;
    int i= 0;
    bool red = true;
    while(i<A.length())
    {
        char temp = A[i];
        if(temp==')')
        {
            red= true;
            while (s.top()!= '(')
            {
                if(  s.top() == '+'|| s.top()=='-'|| s.top() == '*'|| s.top() == '/' )
                red = false;
                s.pop();
            }
            s.pop();
            if(red == true)
            return 1;
        }
        else
        {
            s.push(temp);
        }
        i++;
    }
    return 0;
}
