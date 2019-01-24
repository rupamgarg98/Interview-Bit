/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int removeDuplicates(int* A, int n1) {
   
    if (n1==0 || n1==1)
        return n1;
 
    int j = 0,i;
 
   
    for (i=0; i < n1-1; i++)
        if (A[i] != A[i+1])
            A[j++] = A[i];
 
    A[j++] = A[n1-1];
 
    return j;
}

