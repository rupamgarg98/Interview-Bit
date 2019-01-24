/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int removeDuplicates(int* arr, int size) {
      int ele=arr[0];
    int count=0;
    int j=0;
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            count++;
        }
        else
        {
            count=1;
            ele=arr[i];
        }
        if(count<=2)
        {
            arr[j++]=arr[i];
        }
    }
    return j;
}

