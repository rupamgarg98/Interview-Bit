/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 int findPivot(int arr[], int low, int high)
{
  // base cases
  if(high<low) return -1;
  if(high==low) return low;
  int mid=(low+high)/2;
  if(mid<high&&arr[mid]>arr[mid+1])
    return mid;
if(mid>low&&arr[mid]<arr[mid-1])
    return mid-1;
if(arr[low]>=arr[mid])
    return findPivot(arr,low,mid-1);
    return findPivot(arr,mid+1,high);
}
int search(const int* arr, int size, int key) {
    int j,i=0;
    i=findPivot(arr,0,size-1);
   // printf("%d",i);
     int left=0;
    int right=i;
    int mid;
    
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            left=mid+1;
        else
            right=mid-1;
    }
    left=i+1;
    right=size-1;
     while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            left=mid+1;
        else
            right=mid-1;
    }
    return -1;
}

