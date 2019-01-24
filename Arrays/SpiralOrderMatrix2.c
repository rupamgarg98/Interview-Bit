/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns 
 */
int ** generateMatrix(int A, int *len1, int *len2) {
    int **x = (int **)malloc(sizeof(int)*A*A);
    int n;
    for(n=0;n<A;n++)
    {
        x[n]=(int*)malloc(sizeof(int)*A);
    }
    *len1=A;
    *len2=A;
    int left=0;
    int right=A-1;
    int top=0;
    int bottom=A-1;
    int m=1;
    while(left<=right&&top<=bottom)
    {
        int i;
        for(i=left;i<=right;i++)
        {
            x[top][i]=m;
            m++;
        }
        top++;
        if(top>bottom)
            break;
        for(i=top;i<=bottom;i++)
        {
            x[i][right]=m;
            m++;
        }
        right--;
        for(i=right;i>=left;i--)
        {
            x[bottom][i]=m;
            m++;
        }
        bottom--;
        for(i=bottom;i>=top;i--)
        {
            x[i][left]=m;
            m++;
        }
        left++;
    }
    int j,k;
  
    return x;
}

