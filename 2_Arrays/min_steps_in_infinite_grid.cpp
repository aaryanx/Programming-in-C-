/*You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Example :

Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).

This question is intentionally left slightly vague. Clarify the question by trying out a few cases in the “See Expected Output” section.*/

// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])

int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int s;
    for(int i=0; i<X.size(); i++)
    {
        int xd, yd;
        xd=abs(X[i+1]-X[i]);
        yd=abs(Y[i+1]-Y[i]);
        if(xd>yd)
        {
            s=xd;
        }
        else
        {
            s=yd;
        }
    }
    if(X.size()>1)
        return(s);
    else
        return(0);
}
