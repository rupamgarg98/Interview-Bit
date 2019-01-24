/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxSubArray(const int* A, int n1) {
    if(n1<=0)
        return A;
    int sum=A[0];
    int maxsum=A[0];
    int i;
    for(i=1;i<n1;i++)
    {
        if(sum<0)
            sum=0;
        sum=sum+A[i];
        if(sum>maxsum)
            maxsum=sum;
    }
    return maxsum;
}
