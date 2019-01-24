/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int hammingDistance(const int* A, int n1) {
    int i,j;
    long long ans=0;
    for(i=0;i<32;i++)
    {
        long long count=0;
        for(j=0;j<n1;j++)
        {
            if(A[j]&(1<<i))
                count++;
            
        }
        ans+=(count*(n1-count))*2;
    }
    return ans%1000000007;
}

