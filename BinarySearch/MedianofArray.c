/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Read only ( DON'T MODIFY ) Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Double
 */
 int minimum(int a,int b)
{
    if(a<b)
        return a;
    return b;
}
 
double findMedianSortedArrays(const int* arr1, int size1, const int* arr2, int size2) {
    if(size2<size1)
        return findMedianSortedArrays(arr2,size2,arr1,size1);
    int min_index=0;
    int max_index=size1;
    int median,i,j;
   // printf("%d %d\n",min_index,max_index);
   while(min_index<=max_index)
   {
       i=(min_index+max_index)/2;
       j=(size1+size2+1)/2-i;
       if(i<size1&&j>0&&arr2[j-1]>arr1[i])
            min_index=i+1;
        else if(i>0&&j<size2&&arr1[i-1]>arr2[j])
            max_index=i-1;
        else
        {
            if(i==0)
                median=arr2[j-1];
            else if(j==0)
                median=arr1[i-1];
            else
                median = arr1[i-1]>arr2[j-1]?arr1[i-1]:arr2[j-1];
            break;
        }
   }
   if((size1+size2)%2==1)
        return (double)median;
    if(i==size1)
        return ((double)median+(double)arr2[j])/(double)2;
    if(j==size2)
        return ((double)median+(double)arr1[i])/(double)2;
    return ((double)median+(double)(minimum(arr1[i],arr2[j])))/(double)2;
}

