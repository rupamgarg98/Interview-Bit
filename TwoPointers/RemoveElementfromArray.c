/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int removeElement(int* arr, int n, int x) {
    
    if(n==0)
        return n;
    if(n==1&&arr[0]==x)
        return 0;
    if(n==1&&arr[0]!=x)
        return 1;
    int i;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=x)
        {
            arr[j++]=arr[i];
        }
    }
    return j;
   
}


