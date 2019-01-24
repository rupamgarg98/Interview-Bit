/**
 * @input A : 2D integer array ' * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * @input B : Integer
 * 
 * @Output Integer
 */
 int binarys(int *A,int size,int num)
 {
     int left=0,right=size-1;
     int mid;
     while(left<=right)
     {
         mid=(left+right)/2;
         if(A[mid]==num)
            return 1;
        else if(A[mid]>num)
            right=mid-1;
        else
            left=mid+1;
     }
     return 0;
 }
int searchMatrix(int** A, int n11, int n12, int B) {
    int i;
    for(i=0;i<n11;i++)
    {
        int res=binarys(A[i],n12,B);
        if(res==1)
            return 1;
    }
    return 0;
}

