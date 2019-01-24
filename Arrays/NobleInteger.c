/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 int comp1(void*x,void*y)
{
    return *((int*)x)-*((int*)y);
}
int solve(int* A, int n1) {
    qsort(A,n1,sizeof(int),comp1);
    int i;
  
    for(i=0;i<n1;i++)
    {
        if(A[i]==(n1-i-1))
        {
            if(i!=n1-1)
            {
                if(A[i]!=A[i+1])
                    return 1;
            }
            else
             return 1;
        }
    }
    return -1;
}

