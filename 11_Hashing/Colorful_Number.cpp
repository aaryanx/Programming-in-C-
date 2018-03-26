/* For Given Number N find if its COLORFUL number or not

Return 0/1

COLORFUL number:

A number can be broken into different contiguous sub-subsequence parts. 
Suppose, a number 3245 can be broken into parts like 3 2 4 5 32 24 45 324 245. 
And this number is a COLORFUL number, since product of every digit of a contiguous subsequence is different
Example:

N = 23
2 3 23
2 -> 2
3 -> 3
23 -> 6
this number is a COLORFUL number since product of every digit of a sub-sequence are different. 

Output : 1 */

int Solution::colorful(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unordered_map <int, int> m;
    string s;
    s=to_string(A);
    //cout<<s<<endl;
    for(int j=1; j<=s.length(); j++)
    {
        for(int i=0; i<s.length()-j+1; i++)
        {
        int p=1;
        for(int k=i; k<j+i; k++)
            {
                p=p*(s[k]-'0');
                //cout<<s[k]<<" ";
            }
            //cout<<p<<"\n";
            if(m.find((p))!=m.end())
                m[p]++;
            else
                m[p]=1;
        }
    }
    int counter=0;
    unordered_map <int, int> :: iterator q;
    for(q=m.begin(); q!=m.end(); q++)
    {
        if(q->second==1)
            continue;
        else
            counter++;
        //cout<<counter<<" ";
    }
    if(counter==0)
        return(1);
    else
        return(0);
}
