/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Read only ( DON'T MODIFY ) Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* intersect(const int* arr1, int size1, const int* arr2, int size2, int *len1) {
    int j=0,k=0,m=0;
    if(size1>size2)
    {
        *len1=size1;
    }
    else
        *len1=size2;
    int * arr3 = (int*)malloc(sizeof(int)*(*len1));
    while(j<size1&&k<size2)
    {
        if(arr1[j]==arr2[k])
        {
            arr3[m]=arr1[j];
            m++;
            j++;
            k++;
        }
        else if(arr1[j]<arr2[k])
        {
            j++;
        }
        else if(arr1[j]>arr2[k])
        {
            k++;
        }
    }
    *len1=m;
    return arr3;
}
