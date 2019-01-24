/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer array
 * @input n3 : Integer array's ( C ) length
 * 
 * @Output Integer
 */
 long long m = 10000003;
int paint(int K, int T, int* C, int n3) {
    if(K>=n3)
    {
        long long max=C[0];
        int i;
        for(i=1;i<n3;i++)
        {
            if(C[i]>max)
                max=C[i];
        }
        return (int)((T*max)%m);
    }
    long long sum=0;
    int i;
    for(i=0;i<n3;i++)   
        sum+=C[i];
    long long newsum,count,left=0,right=sum,mid;
    while(left<right)
    {
        mid=(left+right)/2;
        newsum=0;
        count=1;
        for(i=0;i<n3;i++)
        {
            newsum=(newsum+C[i])%m;
            if(newsum>mid)
            {
                count++;
                newsum=0;
                i--;
                if(count>K)
                    break;
            }
        }
        if(count>K)
            left=mid+1;
        else
            right=mid;
    }
        return (int)((right*T)%m);
}

