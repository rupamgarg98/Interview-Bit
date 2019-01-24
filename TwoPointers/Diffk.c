/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int diffPossible(int* A, int n1, int B) {
    int i = 0;  
    int j = 1;
    if(B>(A[n1-1]-A[0]))
        return 0;
    while (i<n1 && j<n1)
    {
        if (i != j && A[j]-A[i] == B)
        {
            
            return 1;
        }
        else if (A[j]-A[i] < B)
            j++;
        else
            i++;
    }
 
    
    return 0;
}

