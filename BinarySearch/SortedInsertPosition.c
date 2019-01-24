/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 int lowerbound(int*a,int n,int num)
{
    int left=0;
    int right=n;
    int mid;
    while(left<right)
    {
        mid=(left+right)/2;
        if(num<=a[mid])
            right=mid;
        else
            left=mid+1;
    }
    return left;
}
int searchInsert(int* A, int n1, int B) {
    int res=lowerbound(A,n1,B);
    return res;
    
}

