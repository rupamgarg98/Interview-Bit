/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int books(int* A, int n1, int B) {
     if(B>n1)
        return -1;
    long long sum=0;
    int i;
    for(i=0;i<n1;i++)
        sum+=A[i];
    long long newsum,mid,count,left=0,right=sum;
    while(left<right)
    {
        mid=(left+right)/2;
        newsum=0;
        count=1;
        for(i=0;i<n1;i++)
        {
            newsum+=A[i];
            if(newsum>mid)
            {
                count++;
                i--;
                newsum=0;
                if(count>B)
                    break;
            }
        }
        if(count>B)
            left=mid+1;
        else 
            right=mid;
    }
    return (int)right;
}
