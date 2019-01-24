/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* plusOne(int* A, int n1, int *len1) {
    if(n1==1)
    {
        *len1=1;
        ++A[0];
        if(A[0]>9)
        {
            ++(*len1);
            A[0]=1;
            A[1]=0;
        }
        return A;
    }
    int countzeros=0;
    int i;
    for(i=0;i<n1;i++)
    {
        if(A[i]==0)
            countzeros++;
        else
            break;
    }
    (*len1)=n1-countzeros;
    int *x=(int *)malloc((*len1)*sizeof(int));
    int carry=0;
    int j=0;
    int sum=A[n1-1]+1;
    for(i=n1-2;i>=countzeros-1;i--)
    {
        x[j++]=sum%10;
        carry=sum/10;
        sum=A[i]+carry;
    }
    if(carry!=0)
    {
        x=realloc(x,sizeof(int)*((*len1)+1));
        x[j]=carry;
        ++(*len1);
    }
    for(i=0;i<(*len1/2);i++)
    {
        int temp=x[i];
        x[i]=x[*len1-i-1];
        x[*len1-i-1]=temp;
    }
    return x;
}
