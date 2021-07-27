/*Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.

Note: This will be evaluated on the extra memory used. Try to minimize the space and time complexity.



Input Format:

The first and the only argument of input contains a 2-d integer matrix, A, of size M x N.
Output Format:

Return a 2-d matrix that satisfies the given conditions.
Constraints:

1 <= N, M <= 1000
0 <= A[i][j] <= 1
Examples:

Input 1:
    [   [1, 0, 1],
        [1, 1, 1], 
        [1, 1, 1]   ]

Output 1:
    [   [0, 0, 0],
        [1, 0, 1],
        [1, 0, 1]   ]

Input 2:
    [   [1, 0, 1],
        [1, 1, 1],
        [1, 0, 1]   ]

Output 2:
    [   [0, 0, 0],
        [1, 0, 1],
        [0, 0, 0]   ]



*/

/*
Method 2 (A Space Optimized Version of Method 1)
This method is a space optimized version of above method 1. This method uses the first row and first column of the input matrix in place of the auxiliary arrays row[] and col[] of method 1. So what we do is: first take care of first row and column and store the info about these two in two flag variables rowFlag and colFlag. Once we have this info, we can use first row and first column as auxiliary arrays and apply method 1 for submatrix (matrix excluding first row and first column) of size (M-1)*(N-1).

1) Scan the first row and set a variable rowFlag to indicate whether we need to set all 1s in first row or not.
2) Scan the first column and set a variable colFlag to indicate whether we need to set all 1s in first column or not.
3) Use first row and first column as the auxiliary arrays row[] and col[] respectively, consider the matrix as submatrix starting from second row and second column and apply method 1.
4) Finally, using rowFlag and colFlag, update first row and first column if needed.

Time Complexity: O(M*N)
Auxiliary Space: O(1)

*/

void Solution::setZeroes(vector<vector<int> > &v)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int row=1,col=1,i,j;
    
    for(int i=0;i<v[0].size();i++)
    {
        
        if(v[0][i]==0)
            row=0;
    }
    
    for(i=0;i<v.size();i++)
    {
        
        if(v[i][0]==0)
            col=0;
    }
    
    for(i=1;i<v.size();i++)
    {
        
        
        for(j=1;j<v[0].size();j++)
        {
            
            if(v[i][j]==0)
            {
                v[0][j]=0;
                v[i][0]=0;
            }
            
        }
    }
    
     for(i=1;i<v.size();i++)
    {
        
        
        for(j=1;j<v[0].size();j++)
        {
            
            if(v[0][j]==0 || v[i][0]==0)
                v[i][j]=0;
            
        }
    }
    
    if(row==0)
    {
        for(i=0;i<v[0].size();i++)
            v[0][i]=0;
    }
    
     if(col==0)
    {
        for(i=0;i<v.size();i++)
            v[i][0]=0;
    }
    
    
}

