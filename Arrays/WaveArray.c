/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 
 int comp1(void *x,void*y)
{
    return *((int*)x)-*((int*)y);
}
 
int* wave(int* A, int n1, int *len1) {
    qsort(A,n1,sizeof(int),comp1);
    int i;
    for(i=0;i<n1-1;i=i+2)
    {
        int temp;
        temp = A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    for(i=0;i<n1;i++)
    {
        printf("%d ",A[i]);
    }
    return A;
}
