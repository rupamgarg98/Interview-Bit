/**
 * @input A : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
long long fact(int num)
 {int i;long long f=1;
     if(num==0)
        f=1;
    else 
    {
        for(i=1;i<=num;i++)
        {
            f=f*(long long)i;
        }
        
    }
 
    return f;
 }
int* getRow(int A, int *len1) {
    int i,j=1;
    *len1=A+1;
    int *arr = (int*)malloc(*len1);
    for(i=0;i<=A;i++)
    {
      arr[i]=j;
      j = j*(A-i)/(i+1);
    }
    
    return arr;
    
}
