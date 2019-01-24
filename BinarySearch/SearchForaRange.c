/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 int lowerbound(const int*arr,int size,int num)
 {
     int left=0;
     int right=size;
     int mid;
     while(left<right)
     {
         mid=(left+right)/2;
         if(num<=arr[mid])
            right=mid;
        else
            left=mid+1;
     }
     return left;
 }
 int upperbound(const int*arr,int size,int num)
 {
      int left=0;
     int right=size;
     int mid;
     while(left<right)
     {
         mid=(left+right)/2;
         if(num<arr[mid])
            right=mid;
        else
            left=mid+1;
     }
     return left;
 }
int* searchRange(const int* A, int n1, int B, int *len1) {
    int i;
    int flag=0;
    int*result=(int*)malloc(sizeof(int)*2);
    *len1=2;
    for(i=0;i<n1;i++)
    {
        if(A[i]==B)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        result[0]=-1;
        result[1]=-1;
        return result;
    }
    int lb = lowerbound(A,n1,B);
    int ub = upperbound(A,n1,B);
    ub = ub-1;
    result[0]=lb;
    result[1]=ub;
    return result;
}
