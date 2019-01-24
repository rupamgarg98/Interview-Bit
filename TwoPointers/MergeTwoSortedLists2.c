/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Return Returns a array of size n1 + n2 with A and B merged. 
 */
int* merge(int* arr1, int size1, int* arr2, int size2) {
    int*arr3=(int*)malloc(sizeof(int)*(size1+size2));
    int i=0,j=0,k=0;
    while(i<size1&&j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(i==size1&&j!=size2)
    {
        while(j<size2)
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    else if(i!=size1&&j==size2)
    {
        while(i<size1)
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
  return arr3;
}
 

